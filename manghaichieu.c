#include<stdio.h>

int main() {
 int i, j;

    // khai bao mang 2 chieu bang mang nac danh
    int ma_tran[4][3];

    //nhap mang
    printf("Nhap mang: \n");
    for (int i = 0; i < 4; i++) {
     for (int j = 0; j < 3; j++) {
      printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &ma_tran[i][j]);
        }
        printf("\n");
    }

    //duyet mang
    printf("Ket qua: \n");
    for (int i = 0; i < 4; i++) {
     for (int j = 0; j < 3; j++) {
            printf("%d ", ma_tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
