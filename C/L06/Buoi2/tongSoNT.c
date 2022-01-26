#include<stdio.h>
#include<math.h>
void nhapMang(int a[],int n){
    for (int i=0 ; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

}
void tongNT(int a[], int n)
{
    int s = 0;
    int k =0;

    for(int i=0; i<n; i++){
        for(int j = 2; j < a[i]; j++ )
    {
        if(a[i] % j == 0)
        {
            k++;
        }

    }
    if (k==0)
        s+=a[i];


    }
    printf("%d",s);
}
int main()
{
    int a[100],n;
    printf("nhap n: ");
    scanf("%d",&n);
    nhapMang(a,n);
    printf("\n\tTong so NT trong mang:");
    tongNT(a,n);
}
