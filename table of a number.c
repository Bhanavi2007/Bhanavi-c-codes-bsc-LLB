#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the header for the table
    printf("Multiplication Table of %d:\n", num);

    // Loop from 1 to 10 to calculate and print the table
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
