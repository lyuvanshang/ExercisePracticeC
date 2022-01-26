#include <stdio.h>
void nhapmanga(int a[100][100],int m, int n)
{

	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
		{
			printf("Gia tri a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
}

int main ()
{
	int m, n, p;
	int a[100][100];
	printf("Cac mang 2 chieu duoc cap phat: a[m,n], b[n,p]\n");
	printf("Nhap gia tri m: "); scanf("%d", &m);
	printf("Nhap gia tri n: "); scanf("%d", &n);
	//printf("Nhap gia tri p: "); scanf("%d", &p);
	printf("Nhap gia tri cho ma tran a: \n");
	nhapmanga(a, m, n);
//	printf("Nhap gia tri cho ma tran b: ");
//	nhapmangb(n, p);
}
