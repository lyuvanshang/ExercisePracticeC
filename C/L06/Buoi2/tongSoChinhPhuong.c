#include<stdio.h>
#include<math.h>

void nhapMang(int a[],int n)
{

    for (int i=0 ; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

}

void xuatMang(int a[],int n)
{

    for (int i=0 ; i<n; i++)
    {
        printf("%d\n",a[i]);

        }

}


void soChinhPhuong(int a[],int n)
{

    int s =0;
    for (int i= 0; i<n; i++)
    {
       int can = sqrt(a[i]);
        if (can*can==a[i]&&a[i]!=1)


        {

            s+=a[i];
        }
    }
    printf("%d",s);
}
int main()
{
    int a[100], n;
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    soChinhPhuong(a,n);
}
