#include <stdio.h>

int main() {
    int arr[10];
    int key, i, found = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Key found at index %d\n", i);
    } else {
        printf("Key not found in the array\n");
    }

    return 0;
}
