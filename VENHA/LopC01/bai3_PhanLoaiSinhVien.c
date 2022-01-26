
#include<stdio.h>

int main()
{
    char diem;
    printf("nhap diem:");
    scanf("%c",&diem);

    switch (diem)
    {
    case 'a':
        printf("loai xuat sac");
        break;
    case 'b':
        printf("loai gioi");
         break;
    case 'c':
        printf("loai kha");
         break;
    case 'd':
        printf("loai trung binh");
         break;
    case 'f':
        printf("loai yeu");
         break;
    }
    return 0;
}
