#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The first %d natural numbers are: \n", n);
        // Loop from 1 to n and print each number
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); // Print a newline at the end for better formatting
    }

    return 0;
}
