#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b(b khac 0)=");
    scanf("%d",&b);

    if (a%b==0)
    {
        c=a/b;
        printf("a / b = %d",c);
    }
    else
    {
        printf("a khong chia het cho b");

    }
    return 0;

}
