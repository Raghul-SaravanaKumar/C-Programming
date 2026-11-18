#include <stdio.h>

union Address
{
    char city[30];
    char state[30];
};

int main()
{
    union Address a;

    printf("Enter City: ");
    scanf("%29s", a.city);

    printf("City = %s", a.city);

    return 0;
}
