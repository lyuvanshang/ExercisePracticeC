#include<stdio.h>

int main()
{
    int n,a[100],max,i;
     printf("nhap n:");
    scanf("%d",&n);

    for ( i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);


    }

    for ( i=0; i<n; i++)
    {

     printf("%d\n",a[i]);

    }
    max=a[0];
  for ( i=0; i<n; i++)
    {
        max=max>a[i]?max:a[i];

 printf("%d\n",max);

    }




}

