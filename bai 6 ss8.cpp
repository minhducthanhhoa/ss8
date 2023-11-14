#include<stdio.h>

int main() {
    int n;          
    int deleteIndex;    
    int i;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int number[n];    
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &number[i]);
	}
    printf("Nhap chi so phan tu can xoa: ");
    scanf("%d", &deleteIndex);
    
    // Thuc hien xoa phan tu trong mang 
    if (deleteIndex >= 0 && deleteIndex < n) {
        // Dich chuyen các phan tu sau deleteIndex sang trái
        for (i = deleteIndex; i < n - 1; i++) {
            number[i] = number[i + 1];
        }
        
        n--;    // Giam so phan tu cua mang di 1
        printf("Phan tu tai chi so %d da duoc xoa.\n", deleteIndex);
    }
    else {
        printf("Chi so phan tu can xoa khong hop le.\n");
    }
    
    // In ra mang sau khi xóa phan tu 
    printf("Mang sau khi xoa phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
}

