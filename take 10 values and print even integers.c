#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 integer values:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEven integers entered:\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}
