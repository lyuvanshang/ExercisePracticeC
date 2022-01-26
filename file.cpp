#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char c[1000];
    FILE*f;
    f=fopen("‪thong_tin.txt","w");

    if (f=NULL)
    {
        printf("Loi!");
        return 0;
    }
    printf("MOi ban nhap thong tin:\n");

    gets(c);
    fprintf(f,"%s",c);

    fclose(f);
    return 0;
}
