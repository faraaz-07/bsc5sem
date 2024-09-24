#include <stdio.h>

int findHCF(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);
    lcm = (num1 * num2) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
