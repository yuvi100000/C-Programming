#include <stdio.h>
// sequence control instruction in c
int main() {
    int a = 5;
    int b = 3;
    int sum;

    sum = a + b;
    printf("Sum = %d", sum);
// decesion control instruction in c
    int h= 10;
    if (h > 5) {
        printf("h is greater than 5");
    } else {
        printf("h is less or equal to 5");
    }
    
    for(int i = 1; i <= 5; i++) 
        printf("%d\n", i);
    
    return 0;
}