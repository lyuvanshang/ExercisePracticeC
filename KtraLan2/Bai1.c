#include<stdio.h>
int main(){
float a,b,c,tong;
int n,m,k;
printf("cay duoi 1m: ");
scanf("%f",&a);
printf("cay cao tren 1m va duoi 2.5m:");
scanf("%f",&b);
printf("cay cao tren 2.5 m:");
scanf("%f",&c);
printf("nha duy co:");
scanf("%d",&n);
printf("co cay duoi 1 m:");
scanf("%d",&m);
printf("so cay cao tren 2.5m:");
scanf("%d",&k);
tong=m*a+k*c+(n-m-k)*b;
printf("duy dc den bu:%f",tong);
return 0;

}
