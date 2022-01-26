#include<stdio.h>
#include<math.h>

int main()
{
    int m,n;
    printf("nhap m,n:");
    scanf("%d %d",&m,&n);

    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if ((j+i)%5==0)
            {
                printf("(%d,%d)",i,j);
            }
        }
    }
}
