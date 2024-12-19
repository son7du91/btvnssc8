#include <stdio.h>
int main() {
    int n;
        printf("Nhap vao mot so nguyen : ");
        scanf("%d", &n);
    int matrix[n][n];
        printf("Nhap gia tri cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        printf("Nhap phan tu matrix[%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);
        }
    }
        printf("Ma tran vuong da nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
