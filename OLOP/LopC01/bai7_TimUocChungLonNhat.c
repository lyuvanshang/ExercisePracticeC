//tim uoc chung lon nhaat cua hai so a,b

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,ucln;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    int m=a;
   int n=b;

    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }

    }
    ucln=b;
    printf("UCLN cua %d %d la %d",m,n,ucln);


}
