#include<stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    float diemtoan, diemly, diemhoa;
    scanf("%f",&diemtoan);
    scanf("%f",&diemly);
    scanf("%f",&diemhoa);
    printf("%.6f",(diemtoan+diemly+diemhoa));
    printf("\n%.6f",(diemtoan+diemly+diemhoa)/3);
    return 0;
}
