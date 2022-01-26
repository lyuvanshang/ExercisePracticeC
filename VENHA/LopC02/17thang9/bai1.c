#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	c=sqrt(a*a+b*b);
	
	printf("c=%d",c);
	return 0;
}
