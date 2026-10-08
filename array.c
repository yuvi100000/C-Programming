#include <stdio.h>

int main()
{
    // ==========================================
    // ARRAY IN C
    // ==========================================

    // Array declaration and initialization
    int marks[5] = {80, 75, 90, 85, 70};

    // Printing array elements
    printf("Student Marks:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Marks[%d] = %d\n", i, marks[i]);
    }

    // ==========================================
    // SUM OF ARRAY ELEMENTS
    // ==========================================

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    printf("\nTotal Marks = %d\n", sum);

    // ==========================================
    // AVERAGE
    // ==========================================

    float average = sum / 5.0;

    printf("Average Marks = %.2f\n", average);

    return 0;
}