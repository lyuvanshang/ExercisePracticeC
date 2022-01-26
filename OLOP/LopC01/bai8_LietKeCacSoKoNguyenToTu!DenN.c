#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,t,dem;


    printf("nhap so n:");
    scanf("%d",&n);
    printf("1  khong phai so ngto\n");
        for (i=2; i<n; i++)
        {
            dem = 0;
            for (t=2; t<i; t++)
            {
                if (i % t == 0)
                {
                    dem ++ ;
                }
            }
        if (dem > 0)
            {

                printf("%d khong phai la so ngto\n",i);

            }
        }
    return 0;
}




