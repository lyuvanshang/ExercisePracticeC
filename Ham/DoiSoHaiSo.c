#include<stdio.h>
int gt=0;
int Doiso(int a,int b)
{

   gt=a;
   a=b;
   b=gt;
   printf("a= %d",a);
   printf("b=%d",b);



}
int main()
{   int a,b;
    scanf("%d ", &b);
    scanf("%d",&a);
    Doiso(a,b);



}
