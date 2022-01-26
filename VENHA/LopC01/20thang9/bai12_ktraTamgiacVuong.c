#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("nhap 3 canh a b c:");
    scanf("%f%f%f",&a,&b,&c);


    if ((a+b>c)&&(a+c>b)&&(b+c)>a)
    {
        if ((sqrt(a*a+b*b)==c)||(sqrt(b*b+a*a)==c)||(sqrt(a*a+c*c)==b))
    {
        printf(" 3 canh {%.2f %.2f %.2f} tren lap thanh mot tam giac vuong\n ",a,b,c);

        }
        else {
            printf("3 canh {%.2f %.2f %.2f} tren khong the lap thanh mot tam giac vuong ",a,b,c);
        }


    }
    else
    {
        printf(" 3 canh {%.2f %.2f %.2f} khong the lap thanh tam giac",a,b,c);
    }
    return 0;
}

