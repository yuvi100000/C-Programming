
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take input
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Display elements
    printf("\nArray elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Release allocated memory
    free(ptr);
    ptr = NULL;

    return 0;
}
