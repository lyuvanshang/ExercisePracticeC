/* tinh tong 1 + 1/2 + ... + 1/n = S*/
#include<stdio.h>
#include<math.h>

int main()
{
int n;
scanf("%d", &n);
float tong = 0;
for (int i = 1; i<=n; i++)
{
tong = tong + 1/(float)i;
}
    printf("%f", tong);
    return 0;
}
