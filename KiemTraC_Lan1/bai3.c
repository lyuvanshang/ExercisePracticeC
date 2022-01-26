#include<stdio.h>
#include<math.h>

int main()
{
    int n,du,e,k;


    printf("nhap so:");
    scanf("%d",&n);
    k=n;
    e=0;
    for (n=n; n>0; n=n/10)
    {
        du=n%10;
        e=(e*10)+du;
    }
    if (k==e)
    {
        printf("la so polidrome");

    }
    else
    {
        printf("khong phai");
    }




}
