#include<stdio.h>
#include<math.h>

int main(){
    int n;

    printf("nhap n:");
    scanf("%d",&n);

    if (sqrt(n) == (int)sqrt(n)){
        printf("n la so chinh phuong");
    }
    else {
        printf("n khong phai la so chinh phuong");
    }
    return 0;

}
