#include <stdio.h>

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: %d\n", num); // Printing decimal directly shows binary representation
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);

    return 0;
}
