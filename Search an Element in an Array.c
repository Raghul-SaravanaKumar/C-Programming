
#include <stdio.h>

int main() {
    int a[5], i, key, found = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}
