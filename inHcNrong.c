#include<stdio.h>

int main()
{
    int r,c;
    printf("nhap r c:");
    scanf("%d",&r);
    scanf("%d",&c);

    for (int i=1; i<=r; i++)

    {
        for (int j=1; j<=c; j++)
        {

            if (j == 1||j == c||i == 1||i == r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
         printf("\n") ;
    }

}
