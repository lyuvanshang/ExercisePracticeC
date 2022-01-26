//nhap doem hoc sinh va in ra ket qua do\\diem<4=f,4<d<5,5=d;5,5<=d<7=c,,,,b,a

#include<stdio.h>
#include<math.h>

int main()
{
    float a;

    printf("nhap a:");
    scanf("%f",&a);

    if (a<4)
    {
        printf("F");

    }
    if (a>=4&&a<=5.5){
        printf("D");
    }
    else if (5.5<a&&7>=a){
        printf("C");
    }
    else if (7<a&&8.5>=a){
        printf("B");
    }
    if (8.5<a&&10>=a){
        printf("A");
    }
    return 0;


}
