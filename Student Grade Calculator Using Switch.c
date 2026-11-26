
#include <stdio.h>

int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark < 0 || mark > 100)
    {
        printf("Invalid mark");
        return 0;
    }

    switch(mark / 10)
    {
        case 10:
        case 9:
            printf("Grade A");
            break;

        case 8:
            printf("Grade B");
            break;

        case 7:
            printf("Grade C");
            break;

        case 6:
            printf("Grade D");
            break;

        default:
            printf("Grade F");
    }

    return 0;
}
