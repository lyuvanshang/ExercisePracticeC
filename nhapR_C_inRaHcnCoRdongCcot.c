#include<stdio.h>

int main()

{
    int r,c;
    printf("nhap r:");
    scanf("%d",&r);
    printf("nhap c:");
    scanf("%d",&c);


    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<=c; j++)
        {
            printf("* ");
        }
        printf("\n");

    }

}

