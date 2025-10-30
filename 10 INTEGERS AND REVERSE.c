#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Integers in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d",numbers[i]);
        printf("\n");
    }

    return 0;
}
