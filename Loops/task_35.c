#include<stdio.h>

int main() {
	int a, b;
	char c;
	while (1) {
		scanf("%d %c %d", &a, &c, &b);
		switch (c) {
			case '+': {
				printf("%d\n", a + b);
				break;
			}
			case '-': {
				printf("%d\n", a - b);
				break;
			}
			case '*': {
				printf("%d\n", a * b);
				break;
			}
			case '/': {
				if (b == 0) {
					printf("error\n");
					break;
				}
				printf("%d\n", a / b);
				break;
			}
		}
	}

	return 0;
}

