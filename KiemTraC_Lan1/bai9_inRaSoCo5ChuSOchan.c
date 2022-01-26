#include<stdio.h>
#include<math.h>

int main()
{

    for (int n=10000; n<=99999; n+=2)
    {
        for (int a=n; a>0; a=(int)a/10)
        {
            if (a%2==0)
            {
                if (a>=2&&a<9)
                {
                    printf("%d\n",n);
                }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
