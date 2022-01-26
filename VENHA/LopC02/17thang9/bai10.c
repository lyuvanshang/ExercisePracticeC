#include<stdio.h>
#include<math.h>

int main()
{
    float v,v0,s,a;
    v=0;
    v0=54/3.6;
    s=54;
    a=(v*v-v0*v0)/(2*s);

    printf("gia toc=%.2f",a);
}
