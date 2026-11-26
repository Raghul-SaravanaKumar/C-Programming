
#include <stdio.h>

int main()
{
    int a[5], i, j;

    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Duplicate elements: ");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
