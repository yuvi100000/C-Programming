
#include <stdio.h>
#include <string.h>

int main() {
    char name[50] = "Banti Singh";
    char copy[50] = "Hello";
    char second[50] = " World";

    printf("Name: ");
    puts(name);

    printf("Length: %zu\n", strlen(name));

    strcpy(copy, name);
    printf("Copied String: %s\n", copy);

    printf("Comparison: %d\n", strcmp(name, copy));

    strcat(second, "!");
    printf("Concatenated String: %s\n", second);

    return 0;
}