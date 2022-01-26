#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,e;
    float x,x1,x2,denta;

    printf("nhap a:");
    scanf("%d",&a);

    printf("nhap b:");
    scanf("%d",&b);

    printf("nhap c:");
    scanf("%d",&c);

    denta=b*b-4*a*c;
    e=denta>0?1: denta<0 ?2:3;


    switch(e)
    {
    case 1:
        x=-b/(2*a);
        printf("nghiem cua pt bac hai la:%.2f ",x);
        break;
    case 3:
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
        printf("nghiem cua pt bac hai la:%.2f ",x1,x2);
        break;
    case 2:
        printf("ptvn");
        break;

    }


    return 0 ;

}
