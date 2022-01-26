#include<stdio.h>
#include<math.h>

int main ()
{
    int a[1000],i,t,n,k;
    printf("nhap n:");
    scanf("%d",&n);



    for ( i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);


    }
    for (i=0; i<n; i++)
    {
        if(a[i]<2){
            continue;
        }
        else
            {
                int flag = 1;
                for (int t=2; t<a[i]; t++)
                {
                    if (a[i]%t==0)
                    {
                        flag = 0;
                        break;
                    }
                   // printf("%d la so nguyen to\n",a[i]);
                }
                if(flag == 1){
                    printf("%d laf so nguyeen to\n",a[i]);
                }
            }


    }
}
