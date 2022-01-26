//nahp n va ktra no co phai la so ngto ko

#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    printf("nhap n:");
    scanf("%d",&n);
    if (n<2){
        printf("%d khong phai la so nguyen to",n);
    }

    for (i=1;i<=n;i++) {

        if (n/i==1||n/i==n){
            printf("%d la so nguyen so ",n);
        }
        else {
            printf("%d khong phai la so nguyen to",n);
        }
    }



}
