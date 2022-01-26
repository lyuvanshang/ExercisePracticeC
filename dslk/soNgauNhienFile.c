#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sinhSoFile(int *r)
{
    FILE* f=fopen("D:\KITC\dslk\\songaunhien.txt","w");
    f= rand();
    printf(" %d\n", r);

}
int main(){
    int r;
    srand((int)time(0));


    sinhSoFile(r);
    fclose(fptr);

}
