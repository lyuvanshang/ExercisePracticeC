#include<stdio.h>
int max(int a, int b,int c)
{
    int max=a;
    if(a>b&&a>c)
    {
        return a;

     }
     if(b>a&&b>c)
     {
         return b;
     }
     return c;
}
int ucln(int a, int b)
{
    for(int i=a; ;i--)
    {
       if( a%i==0&&b%i==0)
       {
           return i;
       }

    }


}
int snt(int a, int b)
{
    if(a<2||b<2)
    {
        return 0;
    }

}
int main()
{
    int a;
    int b;
    printf("nhap a,b, ");
    scanf("%d%d",&a,&b);
    printf("%d",ucln(a,b));
}
