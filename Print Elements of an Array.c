#include <stdio.h>

int main() {
    // Declare and initialize an integer array with 5 numbers
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("The elements of the array are:\n");
    
    // The loop starts at index 0 and goes up to index 4
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, numbers[i]);
    }
    
    return 0;
}
