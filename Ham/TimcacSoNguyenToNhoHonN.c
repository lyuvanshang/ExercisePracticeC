#include<stdio.h>

void SoNt(int n)
{
    int i,t;
    for ( i=2; i<n; i+=1)
    {


        for (t=2; t<i; t++)
        {
            if (i%t==0)
            {
                break;
            }
        }
        if (i==t)
        {
            printf("%d la so nguyen to\n",i);

        }
    }

}
int main()
{
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    SoNt(n);
}
