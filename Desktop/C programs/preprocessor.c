
#include <stdio.h>

// Define a constant
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    float radius, area;
    int number;

    printf("Enter circle radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle: %.2f\n", area);

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("Square of %d = %d\n", number, SQUARE(number));

    return 0;
}
