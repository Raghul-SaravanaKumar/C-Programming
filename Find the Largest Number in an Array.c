#include <stdio.h>

int main() {
    int numbers[6] = {14, 45, 8, 91, 52, 23};
    
    // Assume the first element (index 0) is the largest initially
    int max = numbers[0];
    
    // Loop through the rest of the array starting from index 1
    for (int i = 1; i < 6; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // Update max if a larger value is found
        }
    }
    
    printf("The largest number in the array is: %d\n", max);
    
    return 0;
}
