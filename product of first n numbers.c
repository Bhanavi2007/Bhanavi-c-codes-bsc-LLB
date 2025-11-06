#include <stdio.h>

int main() {
    int n;
    

    
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    
    for (int i = 1; i <= n; i++) {
        product *= i; // Multiply 'product' by the current natural number 'i'
    }

    
    printf("The product of the first %d natural numbers is: %lld\n", n, product);

    return 0; 
}

