//nhap n,  a,kiem tra chan hay le, am hay duong  b,kiem tra so do co phai la so co hai chu so ko   c,in ra gia tri tuye doi   d, kiem tra so chinh phuong


#include<stdio.h>
#include<math.h>

int main(){

int n;
printf("n=");
scanf("%d",&n);

if (n>=0){
    printf(" n la so duong");

    if(n%2==0){
        printf("\nn la so chan");
    }
    else {
        printf("\nn la so le");
    }

}
else {
    printf(" n la so am\n");
    if (n%2==0){
        printf("n la so chan");

    }
else {
    printf("n la so le");
}
}
return 0;
}
