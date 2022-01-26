#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    char c;
    fflush(stdin);
    printf("nhap phep toan:");
    scanf("%c",&c);
    switch (c)
    {
    case '+':
        printf("%d +%d",a,b);
        break;
    case '-':
        printf("%d - %d",a,b);
         break;
    case '*':
        printf("%d x %d",a,b);
         break;
    case '/':
        printf("%d / %d",a,b);
         break;

    }
    return 0;
}
