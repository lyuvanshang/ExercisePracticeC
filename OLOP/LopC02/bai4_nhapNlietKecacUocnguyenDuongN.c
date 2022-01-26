// nhap n ,liet ke cac uoc nguyn duong cua n

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    printf("nhap n=");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        if (n%i==0){
                if (i%2==0){
            printf("%d\n",i);
                }
        }

    }

return 0;
}
