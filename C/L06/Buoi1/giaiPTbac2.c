#include <stdio.h>
#include<math.h>

void giaiPTBac2(float a, float b, float c)
{
    // kiem tra cac he so thoa man ko;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh vo nghiem!");
        }
        else
        {
            printf("Phuong trinh co mot nghiem: x = %.2", (-c / b));
        }

    }
    float x1, x2;
    //  delta
    float delta = b*b - 4*a*c;

    //  nghiem
    if (delta > 0)
    {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %.2f va x2 = %.2f", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    }
    else
    {
        printf("Phuong trinh vo nghiem!");
    }
}

int main()
{
    float a, b, c;
    printf("Nhap a = ");
    scanf("%f", &a);
    printf("Nhap  b = ");
    scanf("%f", &b);
    printf("Nhap  c = ");
    scanf("%f", &c);
    giaiPTBac2(a, b, c);
    return 0;
}
