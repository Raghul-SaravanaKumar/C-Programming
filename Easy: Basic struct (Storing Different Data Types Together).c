#include <stdio.h>
#include <string.h>

// Defining a structure
struct Student {
    int rollNo;
    char name[30];
    float marks;
};

int main() {
    // Declaring and initializing a struct variable
    struct Student s1;

    s1.rollNo = 101;
    strcpy(s1.name, "Aarav");
    s1.marks = 89.5;

    // Accessing all members at the same time
    printf("--- Student Details ---\n");
    printf("Roll No : %d\n", s1.rollNo);
    printf("Name    : %s\n", s1.name);
    printf("Marks   : %.2f\n", s1.marks);

    // Total size is the sum of all members (plus padding)
    printf("Size of struct: %zu bytes\n", sizeof(s1));

    return 0;
}
