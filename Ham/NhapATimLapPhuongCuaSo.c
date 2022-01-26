#include<stdio.h>

void Lapphuong(int a)
{
    a=a*a*a;
    printf("%d",a);
}
int main()
{
    int a;
    scanf("%d",&a);
    Lapphuong(a);

}
