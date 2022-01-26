
#include <stdio.h>
#include <conio.h>


void main()
{
 int S = 1, i = 2, n;
 do{
  printf("\n Nhap n = ");
  scanf("%d", &n);
  if(n < 0)
  {
   printf("\n Xin vui long nhap n >= 0...");
  }
 }while(n < 0);
 while(S + i < n)
 {
  i++;
  S = S + i;
 }
 printf("\n Ket qua: %d", i);
 getch();
}




