#include<stdio.h>

int main()
{
    int a,b,hoanvi;
    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    hoanvi=a;

    if (a>b)
    {hoanvi=a;
        a=b;
        b=hoanvi;
        printf("a=%d b=%d",b,a);
    }
    else
    {
        printf("a=%d b=%d",a,b);
    }
    return 0;

}
