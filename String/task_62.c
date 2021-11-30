#include<stdio.h>

int main() {
	// char str[] = "abcd";
	// khai bao xau str, luu tru duoc 99 phan tu, do ky tu cuoi cung cua mot xau la '\0'
	char str[100];
	scanf("%s", str);	// khi nhap du lieu cho xau thi khong sd toan tu & trong ham scanf
	printf("%s", str);
	return 0;
}

