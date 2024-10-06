#include <stdio.h>

struct TestStruct {
    int b;
    double c;
    char a;
};

int main() {
    struct TestStruct TestStruct;

    printf("Size of struct: %lu \n", sizeof(TestStruct));

    printf("Address of a: %p\n", &TestStruct.a);
    printf("Address of b: %p\n", &TestStruct.b);
    printf("Address of c: %p\n", &TestStruct.c);

    return 0;
}

//Does changing the order of fields reduce or increase the size of the struct? Why?

//It increases as you can see in my attached screenshots. The reason behind is that padding is need to ensure that 
//each field is alligned to a specific boundry. 
//In this case, the double field requires an 8-byte alignment,
// which means that there must be 3 bytes of padding after the int field to ensure that the double starts on an 8-byte boundary.
// This results in a total size of 16 bytes for the first two fields.
//Then, the char field can be placed immediately after the double, 
//without requiring any additional padding. This brings the total size to 24 bytes.

// How is memory padding affecting the size of your struct?
//The padding typically increases the size of the struct beyond the sum of the individual field sizes. 
//This is because the padding is added to ensure that the struct's overall size is a multiple of the largest field's alignment requirements.