#include <stdio.h>

struct TestStruct{
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct TestStructPack1{
    char a;
    int b;
    double c;
};
#pragma pack()

#pragma pack(2)
struct TestStructPack2{
    char a;
    int b;
    double c;
};
#pragma pack()

#pragma pack(4)
struct TestStructPack4{
    char a;
    int b;
    double c;
};
#pragma pack()

int main(){
    struct TestStruct TestStruct;

    printf("Size of struct: %lu \n", sizeof(TestStruct));

    printf("Address of a: %p\n", &TestStruct.a);
    printf("Address of b: %p\n", &TestStruct.b);
    printf("Address of c: %p\n", &TestStruct.c);

    struct TestStructPack1 TestStructPack1;

    printf("Size of struct(Pack1): %lu \n", sizeof(TestStructPack1));

    printf("Address of a: %p\n", &TestStructPack1.a);
    printf("Address of b: %p\n", &TestStructPack1.b);
    printf("Address of c: %p\n", &TestStructPack1.c);

    struct TestStructPack2 TestStructPack2;

    printf("Size of struct(Pack2): %lu \n", sizeof(TestStructPack2));

    printf("Address of a: %p\n", &TestStructPack2.a);
    printf("Address of b: %p\n", &TestStructPack2.b);
    printf("Address of c: %p\n", &TestStructPack2.c);

    struct TestStructPack4 TestStructPack4;

    printf("Size of struct(Pack4): %lu \n", sizeof(TestStructPack4));

    printf("Address of a: %p\n", &TestStructPack4.a);
    printf("Address of b: %p\n", &TestStructPack4.b);
    printf("Address of c: %p\n", &TestStructPack4.c);

    return 0;
}

//Comparisons
//Differences between without pack and pack(1)
//Without pack as we know from the prev assignment has size of 16, however pack(1) has size of 13 
//which is the sum of the inidividual sizes of struct elements, the size of the struct is 13
// because pack(1) forces the compiler to pack the fields as tightly as possible, without any padding.

//pack(2)
//Required fields to be alligned in 2 byte boundry, which results in 14.

//pack(4)
//Required fields to be alligned in 4 byte boundry, which results in 16.