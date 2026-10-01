#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int total_sum = 0;
    int left_sum = 0;

    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        total_sum -= arr[i]; // total_sum now acts as right_sum

        if (left_sum == total_sum) {
            return i; // Equilibrium index found
        }
        left_sum += arr[i];
    }
    return -1; // No equilibrium index
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = findEquilibriumIndex(arr, n);

    if (index != -1)
        printf("Equilibrium index is %d\n", index);
    else
        printf("No equilibrium index found\n");
        
    return 0;
}
