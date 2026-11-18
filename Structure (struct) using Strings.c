#include <stdio.h>

struct Student
{
    int rollno;
    char name[30];
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%29s", s.name);

    printf("\nStudent Details\n");
    printf("Roll Number = %d\n", s.rollno);
    printf("Name = %s", s.name);

    return 0;
}
