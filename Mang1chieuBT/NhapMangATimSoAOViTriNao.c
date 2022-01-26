#include<stdio.h>
#include<math.h>

int main ()
{
    int a[1000],i,n,k;
    printf("nhap n:");
    scanf("%d",&n);



    for ( i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);


    }
    printf("nhap k:");
    scanf("%d",&k);
    for (int i=0; i<n; i++)
    {

        if (k==a[i])
        {
            printf("%d",i+1);
        }
    }


}
