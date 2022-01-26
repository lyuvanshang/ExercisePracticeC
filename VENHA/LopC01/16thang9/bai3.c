#include <stdio.h>
#include <math.h> 


int main() {
	float a,b,c,delta;
	

	
	printf("phuong trinh bac 2");
	
	printf("\nnhap a:");
	scanf("%f",&a);
	
	printf("\nnhap b:");
	scanf("%f",&b);
	
	printf("\nnhap c:");
	scanf("%f",&c);
	
		delta=b*b-4*a*c;
	
	printf("Phuong trinh co 2 nghiem phan biet la: x1=%f \nx2= %f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));  
	
	
	return 0;
		
}
