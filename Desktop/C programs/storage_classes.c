
#include <stdio.h>

// Storage Classes in C

int globalVar = 100;

void counter()
{
    static int count = 0;
    count++;

    printf("Static count: %d\n", count);
}

int main()
{
    // 1. auto storage class
    auto int a = 10;
    printf("Auto variable: %d\n", a);

    // 2. static storage class
    counter();
    counter();
    counter();

    // 3. extern storage class
    extern int globalVar;
    printf("Extern variable: %d\n", globalVar);

    // 4. register storage class
    register int r = 20;
    printf("Register variable: %d\n", r);

    return 0;
}
