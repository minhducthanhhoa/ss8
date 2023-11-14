#include <stdio.h> 
int main(){
	int n, findNumber, sum = 0;
	//Nhap so phan tu cua mang 
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	//Khai bao va nhap gia tri cac phan tu cua mang 
	int number[n];
	for(int i = 0; i <n; i++){
		printf("nhap phan tu thu %d: ", i);
		scanf("%d", &number[i]); 
	}
	//Nhap gia tri can tim 
	printf("Nhap gia tri can tim: ");
	scanf("%d", &findNumber);
	//In ra cac chi so va tính tong cac phan tu co gia tri bang gia tri can tim
	printf("cac phan tu co gia tri bang %d tai cac chi so: ", findNumber);
	for(int i = 0; i < n; i++){
		if(number[i] == findNumber) {
			printf("%d", i);
			sum += number[i]; 
		} 
	} 
	printf("Tong cac gia tri có phan tu bang %d la: %d\n", findNumber,sum); 
}
