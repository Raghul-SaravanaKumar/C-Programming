
#include <stdio.h>

int main() {
    int a[6], i, key, count = 0;

    printf("Enter 6 numbers:\n");

    for (i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to find frequency: ");
    scanf("%d", &key);

    for (i = 0; i < 6; i++) {
        if (a[i] == key) {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}
