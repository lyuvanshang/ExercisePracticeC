#include<stdio.h>
#include<math.h>
int main()
{

    float a,b;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);

    if(a>b)
    {
        printf("a=b");
    }
    else if(a<b)
    {

        printf("a<b");
    }
    else
    {
        printf("a=b");
    }
    return 0;
}
