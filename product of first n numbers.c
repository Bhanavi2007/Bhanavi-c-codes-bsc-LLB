#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle potentially large products

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Validate the input
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Calculate the product using a for loop
    for (int i = 1; i <= n; i++) {
        product *= i; // Multiply 'product' by the current natural number 'i'
    }

    // Print the result
    printf("The product of the first %d natural numbers is: %lld\n", n, product);

    return 0; // Indicate successful execution
}
