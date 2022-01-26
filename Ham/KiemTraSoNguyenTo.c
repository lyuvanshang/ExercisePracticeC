#include<stdio.h>

int  KiemTraso(int a)
{

    for (int t=2; t<a; t++)
    {
        if (a%t==0)

        {


        }

    }
    return 1;

}



int main()
{
    int a;
    scanf("%d",&a);
    if (KiemTraso(a)==1)
    {
        printf(" SNT");

    }
    else
    {
        printf("Ko phai");
    }

}
