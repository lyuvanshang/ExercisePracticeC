#include<stdio.h>

int main()
{
    int  a[100000],n,i,tongc,tongl;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    tongc=0;
    tongl=0;
    for (i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            tongc=tongc+a[i];

        }
        else
        {
            tongl=tongl+a[i];
        }


    }
    printf("%d\n",tongc);
    printf("%d\n",tongl);



}


