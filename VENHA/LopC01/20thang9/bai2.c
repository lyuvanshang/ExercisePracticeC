#include<stdio.h>
#include<math.h>

int main()
{

    float a;
    printf("nhap a=");
    scanf("%f",&a);

    if(a<0)
    {
        a=-a;
        printf("a=%.2f",a);
    }
    else
    {
        printf("a=%.2f",a);

    }

    return 0;


}
