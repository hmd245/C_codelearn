#include<stdio.h>

int main() {
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	if (b == 0){
		printf("phep chia khong hop le!\n");
	}
	else{
		printf("a / b = %d\n", a / b);
		printf("a mod b = %d\n", a % b);
	}
	return 0;
}
