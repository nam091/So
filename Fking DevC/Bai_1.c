#include<stdio.h>
#include<stdlib.h>

int isprime(int n, int c){
	int i;
	if(n <= 1){
		return;
	}else{
		for(i = 2; i*i < n; i++){
			if(n%i == 0){
				return;
			}
		}
		c++;
		printf("%d ", n);
		return ;
	}
}

int main(){
	int a[1000];
	int n, temp, i, c = 0;
	printf("Nhap so luong phan tu: ", n);
	scanf("%d", &n);
	printf("Nhap mang\n");
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		temp = isprime(a[i], &c);
	}
	return 0;
}
