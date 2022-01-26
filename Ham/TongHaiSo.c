#include<stdio.h>

int TinhChuVi(int a,int b)
{
    int cv=(a+b)*2;
    printf("%d\n",cv);
    return cv;
}
int Tinhdientich(int a,int b)
{
    int dt=a*b;
    printf("%d",dt);
    return dt;
}
void Tong(int cv, int dt)
{
    int k=cv+dt;
    printf("%d",k);
}
int main(){
        int a,b,cv,dt;

        scanf("%d %d",&a,&b);

        cv=TinhChuVi(a,b);
        dt=Tinhdientich(a,b);
        Tong(cv,dt);

}
