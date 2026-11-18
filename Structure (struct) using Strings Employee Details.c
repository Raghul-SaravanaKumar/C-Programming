#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    char department[30];
};

int main()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%29s", e.name);

    printf("Enter Department: ");
    scanf("%29s", e.department);

    printf("\nEmployee Details\n");
    printf("ID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Department = %s", e.department);

    return 0;
}
