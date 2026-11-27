
#include <stdio.h>

struct Book
{
    int id;
    char name[30];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%29s", b.name);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("ID: %d\n", b.id);
    printf("Name: %s\n", b.name);
    printf("Price: %.2f\n", b.price);

    return 0;
}
