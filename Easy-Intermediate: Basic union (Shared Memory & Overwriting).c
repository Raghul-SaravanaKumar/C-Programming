#include <stdio.h>

// Defining a union
union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    // Size will be 4 bytes (size of int/float), not 9 bytes
    printf("Size of union: %zu bytes\n\n", sizeof(d));

    d.i = 65;
    printf("After assigning d.i = 65:\n");
    printf("d.i = %d\n", d.i);

    // Assigning a float overwrites the integer in memory
    d.f = 12.34;
    printf("\nAfter assigning d.f = 12.34:\n");
    printf("d.f = %.2f\n", d.f);
    printf("d.i (corrupted) = %d\n", d.i);

    // Assigning a char overwrites the first byte of the float
    d.ch = 'Z';
    printf("\nAfter assigning d.ch = 'Z':\n");
    printf("d.ch = %c\n", d.ch);
    printf("d.f (corrupted) = %.2f\n", d.f);

    return 0;
}
