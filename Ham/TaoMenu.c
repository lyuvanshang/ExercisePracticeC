#include<stdio.h>
#include<conio.h>
#define MAX 100
void nhap(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void Menu()

{
    printf("-------CHAO.CAC.BAN.DEN.VOI.MENU.CUA.MINH------\n");
                printf("\t1.Xuat Mang\n");
                printf("\t2.Tim Gia Tri Nho Thu 2\n");
                printf("\t3.Nhap N Tim so lan n xuat hien\n");
                printf("MOI BAN NHAP: ");

}
void choose(int a[],int n)
    {


   while(1)
    {


    int k;
    scanf("%d",&k);
    switch (k)
    {

    case 1:
        {


        for (int i=0; i<n; i++)
        {
            printf("%d\t ",a[i]);
        }
        break;
        }
    case 2:
    {


        int tg=0;
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i]<a[j])
                {
                    tg=a[i];
                    a[i]=a[j];
                    a[j]=tg;
                }
            }

        }
        for (int i=0; i<n-1; i++)
        {

            for (int j=i+1; j<n; j++)
            {
                if (a[i]==a[j])
                {
                    break;
                }
                else
                {
                    printf("so lon thu 2 la:%d",&a[j]);
                }
            }
        }
    }

    case 3:
    {


        int p;
        int diem=0;
        printf("moi ban nhap p: ");
        scanf("%d",&p);
        for (int i=0; i<n; i++)
        {
            if (a[i]==p)
            {
                diem++;
            }
            else
            {
                break;
            }
        }
        if (diem==0)
        {
            printf("khong co so ban nhap trong mang");
        }
        else
        {
            printf("so %d xuat hien %d lan",p,diem);
        }

    }
    }
    }


}

int main()
{
    int a[MAX],n;
    printf("nhap n:");
    scanf("%d",&n);
    nhap(a,n);
    Menu();
    choose(a,n);

}
