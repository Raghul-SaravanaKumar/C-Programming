#include <stdio.h>

int main()
{
    int n;
    long long first = 0, second = 1, next;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i)
    {
        // Print the current term
        printf("%lld", first);

        // Add a comma after numbers, except for the last one
        if (i < n)
        {
            printf(", ");
        }

        // Calculate the next term and shift variables forward
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
