#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159
int main()
{

    int r;
    float c,s;

    printf("nhap ban kinh hinh cau r=");
    scanf("%d",&r);

    c=2*PI*r;

    s=PI*r*r;
    printf("c=%f\ns=%f",c,s);
    return 0;


}
