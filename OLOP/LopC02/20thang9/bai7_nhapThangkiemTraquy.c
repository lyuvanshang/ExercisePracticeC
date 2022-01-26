//nhap 3 so nguyen, in ra quy tuong ung

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("nhap thang a trong 12 thang:");
    scanf("%d",&a);

    if (a%3==0)
    {
        printf("so quy la:%d",(a/3));
    }
    else if (a%3!=0)
    {
        printf("so quy la:%d",((int)a/3)+1);
    }
    return 0;


}
