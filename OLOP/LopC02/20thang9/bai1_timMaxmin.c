//nhap 3 so a,b,c tu ban phim,tim so lon nhat ,so be nhat trong 3 so ?

#include<stdio.h>
#include<math.h>

int main()
{

    int a,b,c,max,min;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    max=a;
    min=b;



    if(max<c)
    {
        max=c;
    }
    if(max<b){
        max=b;
    }
    if(min>c){
        min=c;
    }
    if(min>b){
        min=b;
    }
    printf("max la:%d\n",max);
    printf("min la:%d",min);

    return     0;

}
