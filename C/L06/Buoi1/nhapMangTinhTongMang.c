#include<stdio.h>
#include<math.h>

int main()
{
    int a[100];
    int tong = 0;
    int n;



        prinf("Nhap n: ");
        scanf("%d",&n);




        for (int i = 0; i<n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
        for (int i = 0; i<n; i++)
    {
        tong+=a[i];
        printf("tong = ",tong);

    }

}
