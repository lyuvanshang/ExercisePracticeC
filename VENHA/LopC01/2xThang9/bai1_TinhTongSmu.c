#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,i;
    float s;
    printf("nhap x=");
    scanf("%d",&x);
    printf("nhap Mu n=");
    scanf("%d",&n);
    s=0;
    i=1;
    if (n>=0)
    {

        for (i; i<=n; i++)
        {
            s=s+pow(x,i);
        }
    }
    else if (n<0)
    {
        for (i; i>=n; i--)
        {
            s=s+pow(x,i);
        }
    }
    printf("tong s= %.2f",s);
    return 0;

}
