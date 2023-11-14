#include <stdio.h>

int main() {
    int n; 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // khai báo và nhap gia tri cac phan tu cua mang 
    int number[100]; // gia su mang co toi da 100 phan tu  
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("number[%d] = ", i);
        scanf("%d", &number[i]);
    }

    int addValue, addIndex; // giá tri va chi so chèn phan tu vao mang 
    printf("Nhap gia tri can chen: ");
    scanf("%d", &addValue);
    printf("Nhap chi so can chen: ");
    scanf("%d", &addIndex);

    // thêm chèn giá tri addValue vao chi so addIndex cua mang 
    if (addIndex < 0 || addIndex > n) {
        printf("Chi so chen khong hop le!\n");
    } else {
        n++; 
        for (int i = n - 1; i > addIndex; i--) {
            number[i] = number[i - 1]; // dich các phan tu phía sau addIndex sang phai 1 vi trí
        }
        number[addIndex] = addValue; // chèn giá tri addValue vào chi so addIndex

        printf("Mang sau khi chen:\n");
        for (int i = 0; i < n; i++) {
            printf("number[%d] = %d\n", i, number[i]);
        }
    }
}
 
