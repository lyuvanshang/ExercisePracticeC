#include<stdio.h>
#include<math.h>


void TongMuHai(int n)
{
    int S =0;
    for (int i = 1; i<=n; i++)
    {
        S+= pow(i,2);
    }
    printf("%d",S);
}
void TongPhanSo(int n)
{
    float S =0;
    for (int i = 1; i<=n; i++)
    {
        S+= (float)1/i;
    }
    printf("%.2f",S);
}
void TongGiaThua(int n)
{
    int S = 0;

    for (int i=1; i<=n; i++)
    {
        int GT(int i)
        {
            if(i==1)

                return i;
            return i* GT(i-1);

        }
        S = S + GT(i);
    }
    printf("%d",S);
}

int main()
{
    int n;
    scanf("%d",&n);
    TongMuHai(n);
    printf("\n");
    TongPhanSo(n);
    printf("\n");
    TongGiaThua(n);
}
