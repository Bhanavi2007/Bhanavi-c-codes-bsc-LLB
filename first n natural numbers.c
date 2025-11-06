#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The first %d natural numbers are: \n", n);
        
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); 
    }

    return 0;
}

