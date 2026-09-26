#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop continues until num becomes 0
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num = num / 10;                // Remove the last digit from num
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
