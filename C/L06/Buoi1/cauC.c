#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   scanf("%d",&n);
   int tong = 0;
   for(int i=1; i<=n; i++)
   {
       tong = tong + pow(i,2);
   }
   printf("%d",tong);
   return 0;
}
