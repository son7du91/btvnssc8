#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &a);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("Vi tri phan tu la: %d\n", i);
            count = 1;
        }
    }
    if (!count) {
        printf("Phan tu khong ton tai.\n");
    }

    return 0;
}
