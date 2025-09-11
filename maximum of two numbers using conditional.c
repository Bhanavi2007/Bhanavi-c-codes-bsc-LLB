#include <stdio.h>

int main() {
    int num1, num2, maximum;


    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    maximum = (num1 > num2) ? num1 : num2;

    printf("The maximum of %d and %d is %d\n", num1, num2, maximum);

    return 0;
}
