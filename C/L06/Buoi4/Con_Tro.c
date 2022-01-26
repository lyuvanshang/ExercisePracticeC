#include<stdio.h>

int main()
{
    /*int *a, value;
    value = 5;
    a=&

    value;
    printf("%d\n",a);
    printf("%d",&a);
*/
int a[100]={1,3,4};
int n = 3;
for (int i=0;i<n;i++)
{
    scanf("%d",a+i);
}
for (int i=0;i<n;i++)
{
    printf("%d",a[i])
     ;
}
    return 0;
}
