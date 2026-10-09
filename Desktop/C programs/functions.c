
#include <stdio.h>

// Function declaration
int add(int a, int b);
void greet(void);
void displaySum(int a, int b);

int main() {
    greet();

    int result = add(10, 20);
    printf("Returned Sum: %d\n", result);

    displaySum(5, 15);

    return 0;
}

// Function with arguments and return value
int add(int a, int b) {
    return a + b;
}

// Function without arguments and return value
void greet(void) {
    printf("Hello, Banti!\n");
}

// Function with arguments but no return value
void displaySum(int a, int b) {
    printf("Sum: %d\n", a + b);
}