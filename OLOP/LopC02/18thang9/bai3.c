// nhap 2 moc thoi gian t1,t2(gio,phut,giay)
//tinh theo giay kc 2 tg

#include <stdio.h>

int main (){

float g,p,s,g1,p1,s1,kc;

printf(" nhap thoi gian o a=");
scanf("%f%f%f",&g,&p,&s);
printf("nhap thoi gian o b=");
scanf("%f%f%f",&g1,&p1,&s1);

kc=((g*3600+p*60+s)-(g1*3600+p1*60+s1));

printf("kc=%f",kc);
return 0;


}
