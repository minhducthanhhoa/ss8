#include <stdio.h>

int main() {
    int n, i;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int number[n];
    
    // Nhap gia tri cho mang
    for (i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i+1);
        scanf("%d", &number[i]);
    }
    
    // Tìm giá tri lon nhat
    int max = number[0];
    for (i = 1; i < n; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }
    
    // Tìm giá tri nho nhat
    int min = number[0];
    for (i = 1; i < n; i++) {
        if (number[i] < min) {
            min = number[i];
        }
    }
    
    printf("Gia tri lon nhat trong mang la %d\n", max);
    printf("Gia tri nho nhat trong mang la %d\n", min);
}

