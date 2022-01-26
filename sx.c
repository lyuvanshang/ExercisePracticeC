#include <stdio.h>
int main()
{
    int i, j, tg, k, a[1000], n;
    printf("nhap n, k: ");
    scanf("%d%d",&n, &k);
     for (i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);


    }
    for(i=0; i<n-1; i++)

    {
        for(j=i+1; j<n; j++)
            if(a[i]>a[j])
        {
            tg = a[j];
            a[j]=a[i];
            a[i]=tg;
        }
    }
    i=k-1;
    printf("%d", a[i]);

}
