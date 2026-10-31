#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for pyramid alignment
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", val);
            // Update Pascal's formula: val = val * (i - j) / (j + 1)
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    
    return 0;
}
