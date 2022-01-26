//nhap 1 so ng, kiem tra xe, so do la so chinh phuong khong?

#include <stdio.h>
#include <math.h>
int main(){

    int a;
    printf("nhap a=");
    scanf("%d",&a);

    if(sqrt(a)==sqrt(a)){
        printf("a la so chinh chuong");

    }
    else {
        printf("a khong phai la so chinh phuong");

    }
    return 0;
}
