#include <stdio.h>

int main() {
    float basic, HRA, DA, gross;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    if (basic < 1500) {
        HRA = basic * 0.10; // 10% of basic
        DA = basic * 0.90;  // 90% of basic
    } else {
        HRA = 500;
        DA = basic * 0.98;  // 98% of basic
    }

    gross = basic + HRA + DA;
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}

