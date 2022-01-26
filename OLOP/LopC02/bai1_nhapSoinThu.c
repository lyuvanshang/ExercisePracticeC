#include<stdio.h>
#include<math.h>

int main()
{
    int a;

    printf("a:");
    scanf("%d",&a);

    switch (a)
    {
    case 2:
        printf("THU HAI");
        break;
    case 3:
        printf("THU BA");
        break;
    case 4:
        printf("THU TU");
        break;
    case 5:
        printf("THU NAM");
        break;
    case 6:
        printf("THU SAU");
        break;
    case 7:
        printf("THU BAY");
        break;
    case 8:
        printf("CHU NHAT");
        break;
    default :
        printf("nhap lai di thang ngu");
    }
    return 0;

}
