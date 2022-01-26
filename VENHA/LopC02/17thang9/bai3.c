#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,p,s;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    p=(a+b+c)/2;

    s=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("s=%d",s);
    return 0;

}
