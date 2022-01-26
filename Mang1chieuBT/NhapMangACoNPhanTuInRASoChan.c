#include<stdio.h>
#include<math.h>

int main ()
{
    int a[1000],n,e,i,k;
    printf("nhap n:");
    scanf("%d",&n);


    for (int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);



    }
    for (int i=0;i<n;i++)
    {
        if (a[i]%2==0)
    {
        printf("%d\n",a[i]);
        printf("%d",i+1);
    }
    }



}
