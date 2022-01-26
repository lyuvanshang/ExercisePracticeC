#include<stdio.h>

int main ()
{
    int a[1000],max,min,i,b,c,n;

    printf("nhap n:");
    scanf("%d",&n);



    for ( i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        max=a[0];
        min=a[0];
    }

    for ( i=0; i<n; i++)
    {
        max=max>a[i]?max:a[i];



    }
    printf("%d\nvi tri %d\n",max,i);
    for (i=0; i<n; i++)
    {
        min=min<a[i]?min:a[i];





    }


    printf("%d\n vi tri %d ",min,i);
}
