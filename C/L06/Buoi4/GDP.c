#include<stdio.h>
#include<conio.h>

int main()
{
    int nam = 2014;
    float GDP, GDP_2014;
    float tocDoTangTruong;

    printf("Nhap GDP nam 2014: ");
    scanf("%f",&GDP_2014);
    GDP = GDP_2014;

    printf("Nhap toc do tang truong: ");
    scanf("%f",&tocDoTangTruong);



    printf("%8s%8s\n","Nam","GDP");;
    while(1)
    {
        printf("%8d%8.2f\n",nam++,GDP);
        if (GDP >= 2*GDP_2014)
        {
            break;
        }
        GDP = GDP + (1 + tocDoTangTruong/100);
    }
return 0;
}
