#include <stdio.h>

struct MyStruct {
    int a;
    double b;
    char c;
};

union MyUnion {
    int a;
    double b;
    char c;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    printf("=== STRUCT MEMORY ADDRESSES ===\n");
    printf("Total Size : %zu bytes\n", sizeof(s));
    printf("Address of a: %p\n", (void*)&s.a);
    printf("Address of b: %p\n", (void*)&s.b);
    printf("Address of c: %p\n\n", (void*)&s.c);

    printf("=== UNION MEMORY ADDRESSES ===\n");
    printf("Total Size : %zu bytes\n", sizeof(u));
    printf("Address of a: %p\n", (void*)&u.a);
    printf("Address of b: %p\n", (void*)&u.b);
    printf("Address of c: %p\n", (void*)&u.c);

    return 0;
}
