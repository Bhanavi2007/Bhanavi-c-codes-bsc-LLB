#include <stdio.h>

int main() {
    int num1, num2;
    float division_result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    printf("\nArithmetic Operations:\n");


    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);


    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);


    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);


    if (num2 != 0) {
        division_result = (float)num1 / num2;
        printf("Division: %d / %d = %.2f\n", num1, num2, division_result);
    } else {
        printf("Division: Cannot divide by zero.\n");
    }

    if (num2 != 0) {
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Modulus: Cannot perform modulus with zero.\n");
    }

    return 0;
}
