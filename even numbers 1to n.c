#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
