#include<stdio.h>
int main()
{
    int a,b;
    printf("Nhap vao 2 so bat ki:");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("a la boi so cua b");
    }
    else
    {
        printf("a KHONG la boi cua b");
    }
}
