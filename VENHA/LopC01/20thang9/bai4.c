#include<stdio.h>
#include<math.h>

int main(){
int a,b,c,max;

printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);

max=a;
if (max<b){

    max=b;
}
if (max<c){
    max=c;
}
printf("so lon nhat trong %d %d %d la:%d",a,b,c,max);

return 0;
}
