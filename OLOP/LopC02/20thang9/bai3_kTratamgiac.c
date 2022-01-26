//nhap 3 so a,b,c ktra 3 so co tao thanh tam giac khong ,neu cos thi tam giac gi

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    if ((a+b>c)&&(a+c>b)&&(b+c)>a)
    {
        if ((sqrt(a*a+b*b)==c)||(sqrt(b*b+a*a)==c)||(sqrt(a*a+c*c)==b))
    {
        printf(" 3 canh tren nhap thanh mot tam giac vuong\n ");

        }

        if (a==b&&a==c)
    {
        printf("3 canh co the lap thanh tam giac deu");
        }
        else if ((a==b)||(a==c))
        {
            printf(" 3 canh ten lap thanh mot tam giac can");

        }
    }
    else
    {
        printf("khong the lap thanh tam giac");
    }
    return 0;
}
