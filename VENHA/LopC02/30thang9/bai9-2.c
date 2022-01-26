#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Nhap vao 3 so bat ki:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180&&a>0&&b>0&&c>0&&a<180&&b<180&&c<180)
    {
        printf("3 so do la goc cua 1 tam giac");
    }
    else
    {
        printf("3 so do KHONG la goc cua 1 tam giac");
    }
}
