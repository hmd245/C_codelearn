#include<stdio.h>

int main() {
	int n;
	while(1) {
		scanf("%d", &n);
		if(n > 0) {
			printf("n is a positive number\n");
		} else if(n < 0) {
			printf("n is a negative number\n");
		} else {
			printf("n is equal to 0\n");
		}
	}
	return 0;
}

