// nhap mot so bat ky in gia tri , in ra gia tri tuyet doi

#include <stdio.h>

int main(){

int a;

printf("nhap a=");
scanf("%d",&a);

if (a<0){
    a=-a;
    printf("a=%d",a);
}
else {
    printf("a=%d",a);

    return 0;
}
}
