#include <stdio.h>
int main () {
	int a,b,tong,hieu;
	float c,d,tongf, hieuf;


	printf("nhap a:") ;
	scanf("%d",&a) ;
	printf("nhap b:") ;
	scanf("%d", &b) ;
	printf("nhap c:");
	scanf("%f",&c) ;
	printf("nhap d:") ;
	scanf("%f",&d) ;

	tong=a+b;
	hieu=a-b;
	tongf=c+d;
		hieuf=c-d;

	printf("tong=%d ",tong) ;
		printf("\nhieu=%d",hieu);
	printf("\ntongf=%.2f ",tongf) ;
	printf("\nhieuf=%.2f",hieuf) ;

	printf("%d",a);
	return 0;


}

