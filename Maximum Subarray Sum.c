#include <stdio.h>

int maxSubArraySum(int a[], int size) {
    int max_so_far = a[0];
    int curr_max = a[0];

    for (int i = 1; i < size; i++) {
        curr_max = (a[i] > curr_max + a[i]) ? a[i] : curr_max + a[i];
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
    }
    return max_so_far;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, n);
    
    printf("Maximum contiguous sum is %d\n", max_sum);
    return 0;
}
