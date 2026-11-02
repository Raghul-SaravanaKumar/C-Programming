#include <stdio.h>

int main() {
    int arr[5];
    
    // First loop: Store user inputs into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // '&' is used to store value at the address of arr[i]
    }
    
    // Second loop: Read and print values from the array
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
