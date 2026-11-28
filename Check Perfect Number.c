#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n && n > 1)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}
