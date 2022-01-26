#include<stdio.h>
#include<math.h>

int main()

{
    int a,b,c;
    float x,x1,denta;

    printf("giai pt bac 2: ax^2+bx+c=0\n");


    printf("nhap a(a khasc 0):");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    printf("nhap c:");
    scanf("%d",&c);

    denta=b*b-(4*a*c);
    x=(-sqrt(denta)-b)/(2*a);
    x1=(sqrt(denta)-b)/(2*a);


    printf ("nghiem cua pt %dx^2+ %dx + %d =0 la:\n x=%.2f\nx1= %.2f",a,b,c,x,x1);



    return 0;
}
