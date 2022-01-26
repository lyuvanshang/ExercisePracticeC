#include<stdio.h>

int main()
{
    int a[100],i,j,n,k;

    printf("nhap n: ");
    scanf("%d",&n);

    for ( i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    int tg;
    printf("mang sau khi duoc sap xep la:\n");
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[j]<a[i])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }

    }
for (i=0;i<n;i++){
      printf("%d\t",a[i]);
}
printf("nhap so k:");
scanf("%d",&k);
i=k+1;
printf("%d",a[i]);
}

