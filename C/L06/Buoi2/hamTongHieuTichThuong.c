#include<stdio.h>
#include<math.h>


void Tong(int a, int b)
{
    int S = a +b;
    printf("%d",S);
}

int Hieu(int a, int b)
{
    return a-b;
}
float Thuong(int a, int b)
{
    return (float)a/b;
}
int Tich(int a, int b)
{
    return a*b;

}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    Tong(a,b);
    printf("\n");
    printf("%d\n",Hieu(a,b));
    printf("%.3f\n",Thuong(a,b));
    printf("%d\n",Tich(a,b));

}


