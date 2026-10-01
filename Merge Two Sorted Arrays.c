#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int res[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        res[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        res[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int res[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, res);

    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
