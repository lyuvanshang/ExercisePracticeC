#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int tich=1;
    for (int i = 1 ;i<=n; i++)
    {
        tich*=i;
    }

    printf("%d",tich);

}
