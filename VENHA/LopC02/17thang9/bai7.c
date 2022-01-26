#include<stdio.h>
#include<math.h>

int main()
{
    float a;


    printf("a=");
    scanf("%f",&a);


    printf("a^1=%.2f\na^2=%.2f\na^3=%.2f",pow(a,1),pow(a,2),pow(a,3));

    return 0;

}
