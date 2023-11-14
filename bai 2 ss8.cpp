#include <stdio.h> 
int main(){
	int row,col;
	float sum = 0;
	printf("Nhap vao so phan tu cua mang 2 chieu (row * col): ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &col);
	//Khai bao mang 2 chieu 
	float number[row][col];
	//hap gia tri cac phan tu cua mang 
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			printf("Nhap gia tri phan tu number[%d][%d]: ",i,j);
			scanf("%f", &number[i][j]);
		}
	}
	//In ra cac phan tu chan va tinh tong 
	printf("Cac phan tu chan trong mang 2 chieu: \n");
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if((int)number[i][j] % 2 == 0) {
				printf("%.2f", number[i][j]);
				sum += number[i][j]; 
			} 
		} 
	}
	printf("Tong cac phan tu chan: %.2f\n",sum); 
	
}
