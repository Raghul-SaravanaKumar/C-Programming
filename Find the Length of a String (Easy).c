#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Safe input for strings

    // Loop until null terminator '\0' or newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
