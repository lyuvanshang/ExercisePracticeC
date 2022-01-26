//nhap a,b,in ra  "a>b" "a<b" "a=b"  tuy vao gia tri cua chung

#include <stdio.h>


int main()
{

    float a,b;

    printf("nhap a=");
    scanf("%f",&a);
    printf(" nhap b=");
    scanf("%f",&b);

    if(a>b)
    {
        printf("a>b");

    }
    else if(a<b)
    {
        printf("a<b");
    }
    else
    {
        printf("a=b");
    }
    return 0;
}
