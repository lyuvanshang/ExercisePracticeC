#include<stdio.h>
#define MAX 100



void Nhapmang(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
}
void xuat( int a[],int n)

{

    for (int i=0; i<n; i++)
    {
        printf("a[%d]= %d\n",i,a[i]);
    }
}
int max(int a[],int n)
{

    int k= a[0];
    for (int i=0; i<n; i++)
    {
        if (k<a[i])
        {
            k=a[i];
        }
    }
    return k;
}
void Vitri(int a[], int n)
{
    int k=max(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i]==k)
        {
            printf("%3d",i+1);
        }
    }
}

int main()
{
    int a[MAX], n;
    printf("nhap n= ");
    scanf("%d",&n);
    Nhapmang(a,n);
    xuat(a,n);
    Vitri(a,n);
}
