#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf(" nhap so a=");
    scanf("%d",&a);

    if (a>0)
    {
        if (a%2==0)
        {
            printf("%d la so duong chan",a);
        }
        else
        {
            printf("%d la so duong le",a);
        }
    }
    else if (a<0)
    {
        if (a%2==0)
        {
            printf("%d la so am chan",a);
        }
        else
        {
            printf("%d la so am le",a);
        }
    }
    else
    {
        printf("a la so 0");
    }
    return 0;
}
