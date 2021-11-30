#include<stdio.h>
#include<string.h>

int main() {
	int doDai = 0;
	char str[100];
	scanf("%s", str);
	while (str[doDai] != '\0') {
		doDai++;
	}
	printf("%d\n", doDai);
	printf("khi dung ham strlen: %d", strlen(str));
	return 0;
}

