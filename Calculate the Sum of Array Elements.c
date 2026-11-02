#include <stdio.h>

int main() {
    int numbers[5] = {5, 12, 7, 20, 3};
    int sum = 0; // Always initialize sum to 0
    
    // Loop through the array to add each element to the sum
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i]; // Can also be written as: sum += numbers[i];
    }
    
    printf("The sum of all elements in the array is: %d\n", sum);
    
    return 0;
}
