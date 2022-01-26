
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;


    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    printf("nhap c=");
    scanf("%d",&c);


   int max=a>=b?a:b>c?b:c>a?c:a;

   printf("max trong 3 so %d %d %d la:%d",a,b,c,max);

   return 0;

}
