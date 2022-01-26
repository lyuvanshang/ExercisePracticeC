#include<stdio.h>
#include<math.h>

int main ()
{
    int x1,y1,x2,y2;
    float c;
    printf("nhap x1:");
    scanf("%d",&x1);
    printf("nhap y1:");
    scanf("%d",&y1);
    printf("nhap x2:");
    scanf("%d",&x2);
    printf("nhap y2:");
    scanf("%d",&y2);
    c=  sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("%.4f",c);
    return 0;
}
