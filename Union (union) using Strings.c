#include <stdio.h>

union Student
{
    char name[30];
    int rollno;
};

int main()
{
    union Student s;

    printf("Enter Student Name: ");
    scanf("%29s", s.name);

    printf("Student Name = %s", s.name);

    return 0;
}
