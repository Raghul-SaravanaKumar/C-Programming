#include <stdio.h>
int main()
{
    
    int a,b,c;
    printf("\nEnter value of a:");
    scanf("%d",&a);
    int resa = a*50;
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    int resb = b*10;
    printf("\nEnter the value of c:");
    scanf("%d",&c);
    int resc = c*5;
   printf("\n\n============================");
    printf("\n\tABC SUPERMARKET");
    printf("\n=============================");
    printf("\nItem\t\tQty\t\tprice");
    printf("\n-----------------------------");
    printf("\nNotebook\t%d",a);
    printf("\t\t%d",resa);
    printf("\nPen\t\t\t%d",b);
    printf("\t\t%d",resb);
    printf("\nPencil\t\t%d",c);
    printf("\t\t%d",resc);
    printf("\n-----------------------------");
    int result = resa+resb+resc;
    printf("\n==========================\nTotal Amount\t\t%d",result);
    printf("\n==========================\nThank you! visit again\n==========================");
    return 0;
}
