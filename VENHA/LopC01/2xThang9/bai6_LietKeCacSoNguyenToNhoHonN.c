#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,t;

    printf("nhap so n:");
    scanf("%d",&n);


   for (i=2;i<n;i+=1){


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
