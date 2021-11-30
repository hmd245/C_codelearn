#include<stdio.h>

int main() {
	int a;
	int dem = 0;		
	while(true) {
		scanf("%d", &a);
		if (a >= 10 && a <= 100) {
			printf("%d is range (10, 100)\n", a);
		} else {
			printf("%d not is range (10, 100)\n", a);
		}
		dem++;
		if (dem == 5) {
			break;
		}
	}
	return 0;
}

