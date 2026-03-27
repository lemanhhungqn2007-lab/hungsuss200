#include <stdio.h>

int main() {
    int i, j, n, sum;
    int arr[10][10];

    printf("Nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);

    printf("Nhap các phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMa tran vua nhap la:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTong cac hang cua ma tran la: ");
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        printf("%d ", sum);
    }

   
    printf("\nTong cac cot cua ma tran la: ");
    for (j = 0; j < n; j++) {
        sum = 0;
        for (i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        printf("%d ", sum);
    }

    printf("\n");
    return 0;
}