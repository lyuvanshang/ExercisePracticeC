#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,t;

    printf("nhap so a:");
    scanf("%d",&a);
 printf("nhap so b:");
    scanf("%d",&b);

    if (i>=2)
    {

        for (int i=a; i<=b; i++)
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
    return 0;
}



