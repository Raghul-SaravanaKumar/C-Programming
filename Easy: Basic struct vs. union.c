#include <stdio.h>
#include <string.h>

// Structure allocates memory for all members independently
struct StudentStruct {
    int id;
    float gpa;
    char grade;
};

// Union shares memory among all members (size equals the largest member)
union StudentUnion {
    int id;
    float gpa;
    char grade;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;

    printf("--- Memory Size Comparison ---\n");
    printf("Size of struct: %zu bytes\n", sizeof(s));
    printf("Size of union:  %zu bytes\n\n", sizeof(u));

    // Struct holds all values simultaneously
    s.id = 101;
    s.gpa = 3.8;
    s.grade = 'A';
    printf("--- Struct Values ---\n");
    printf("ID: %d, GPA: %.1f, Grade: %c\n\n", s.id, s.gpa, s.grade);

    // Union overwrites previous values when a new member is assigned
    printf("--- Union Values (Overwriting Behavior) ---\n");
    u.id = 101;
    printf("Assigned ID: %d\n", u.id);
    
    u.gpa = 3.8;
    printf("Assigned GPA: %.1f (ID is now corrupted: %d)\n", u.gpa, u.id);
    
    u.grade = 'A';
    printf("Assigned Grade: %c (GPA is now corrupted: %.1f)\n", u.grade, u.gpa);

    return 0;
}
