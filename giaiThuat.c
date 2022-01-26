#include<stdio.h>


// n max 20
#define MAX 20
int x[MAX]; // x là nghiệm của bài toán,
int n, k;

void GhiNghiem() {
    int i;
    for(i = 1; i <= k; i++) {
        printf("%d, ", x[i]);
    }
    printf("\n");
}

void ToHop(int i) {
    int j;
    for(j = x[i-1] + 1; j <= n-k+i; j++) {
        x[i] = j;
        if(i == k)
            GhiNghiem();
        else ToHop(i+1);
    }
}

int main() {
    printf("\nNhap n, k: ");
    scanf("%d%d", &n, &k);

    x[0]=0;

    ToHop(1);
    return 0;
}
