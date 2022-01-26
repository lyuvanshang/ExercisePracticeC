#include<stdio.h>
#include<math.h>
#define MAX 100

int nhapMaTran(int a[MAX][MAX], int n)
{
    for(int i = 0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("Nhap a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    return 1;
}
void XuatMaTran(int a[MAX][MAX], int n)
{
	for(int i = 0; i<n ; i++)
	{
		printf("\n");
		for(int j = 0; j<n ; j++)
			printf("%d\t",a[i][j]);
	}

}

int inPhanTuCheoChinh(int a[MAX][MAX], int n)
{
    for(int i = 0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
           if (i==j)
           {
               printf("a[i][j] = %d\n",i,j,a[i][j]);
           }
        }
    }
    return 2;
}

int minArr(int a[MAX][MAX], int n)
{
    int tmp = a[0][0];
    for(int i = 0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
           if (tmp > a[i][j])
           {
               tmp = a[i][j];
           }
        }
    }
    printf("So be nhat cua ma tran la: %d",tmp);
    return 4;
}

int maxArr(int a[MAX][MAX], int n)
{
    int tmp = a[0][0];
    for(int i = 0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
           if (tmp < a[i][j])
           {
               tmp = a[i][j];
           }
        }
    }
    printf("So lon nhat cua ma tran la: %d",tmp);

    return 3;
}
void BubbleSortA(int a[MAX][MAX], int n)
{
	for(int k = 0; k<n ; k++)
		for(int i = 0; i<n-1 ; i++)
		for(int j = n-1; j>i ; j--)
		if(a[k][j]<a[k][j-1])
		{
			int temp = a[k][j];
			a[k][j] = a[k][j-1];
			a[k][j-1] = temp;

		}
}
/*int sapXepPhanTuTheoHang(int a[MAX][MAX], int n)
{
    for
}
void Menu()
{
    printf
}*/

int main ()
{
    int n, a[MAX][MAX];
    scanf("%d",&n);
    nhapMaTran(a,n);
    BubbleSortA(a,n);
    XuatMaTran(a,n);
return 0;
}



