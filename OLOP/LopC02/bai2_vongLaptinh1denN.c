//tinh tong tu 1 den n

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int i=0;
    int s=0;
    printf("nhap n:");
    scanf("%d",&n);

    while (i<=n){
    s=s+i;
    i=++i;


}
 printf("tong=%d",s);
}
