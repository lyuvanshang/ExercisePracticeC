#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;

    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    c=a*b;

    if (c>0)
    {

        printf("cung dau");

    }
    else if (c<0)
    {
        printf("khac dau");

    }
    else {
        printf("khong xac dinh");
    }
return 0;
}
