#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");

    // Read the integer from the user
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i; // Add each number from 1 to n to the sum
    }

    // Display the calculated sum
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
