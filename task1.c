#include <stdio.h>

int main() {
    int intVar;
    char charVar;
    double doubleVar;
    short shortVar;

    printf("Size of int: %lu\n", sizeof(intVar));
    printf("Size of char: %lu\n", sizeof(charVar));
    printf("Size of double: %lu\n", sizeof(doubleVar));
    printf("Size of short: %lu\n", sizeof(shortVar));

    printf("Address of intVar: %p\n", &intVar);
    printf("Address of charVar: %p\n", &charVar);
    printf("Address of doubleVar: %p\n", &doubleVar);
    printf("Address of shortVar: %p\n", &shortVar);

    return 0;
}

//When variables are stored in memory, they are often aligned to specific boundaries based on their data type. 
// This alignment can improve memory access performance, as it allows for more efficient data fetching.