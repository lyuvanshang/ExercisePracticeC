//nhap a,c . tim max,tim min, a co chia het cho b ko

#include<stdio.h>
#include<math.h>

 int main()
{

    int a,b;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if (a<b)
    {
        printf("max la :%d\nmin la:%d\n",b,a);


    }
    if (a>b)
    {
        printf("max la :%d\nmin la:%d\n",a,b);
    }
    if (a%b==0){
        printf("a chia het cho b");
    }
    else {
        printf("a khong chia het cho b");
    }

    }

