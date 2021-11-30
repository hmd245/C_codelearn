#include<stdio.h>

int main() {
	char str_Name[100];
	char str_Address[100];
//	scanf("%s%s", str_Name, str_Address);
	gets(str_Name);
	gets(str_Address);
	printf("Name: %s\nAddress: %s",str_Name, str_Address);

	return 0;
}

