#include <stdio.h>
#include <string.h>

int main()
{
    // ==========================================
    // STRING IN C
    // ==========================================

    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("\nYour name is: %s\n", name);

    // String length
    printf("Length of name = %lu\n", strlen(name));

    return 0;
}