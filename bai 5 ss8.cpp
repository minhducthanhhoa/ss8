#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int number[n];

    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("number[%d] = ", i);
        scanf("%d", &number[i]);
    }

    int updateValue, updateIndex;
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);
    printf("Nhap chi so phan tu can cap nhat: ");
    scanf("%d", &updateIndex);

    if (updateIndex >= 0 && updateIndex < n) {
        number[updateIndex] = updateValue; 
        printf("Mang sau khi cap nhat:\n");
        for (int i = 0; i < n; i++) {
            printf("number[%d] = %d\n", i, number[i]);
        }
    } else {
        printf("Chi so phan tu can cap nhat khong hop le!\n");
    }
}

