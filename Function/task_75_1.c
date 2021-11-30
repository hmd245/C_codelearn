#include<stdio.h>

void show(int a, int b, int c) {
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("%d\n", max);
}

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	show(a, b, c);
	return 0;
}

