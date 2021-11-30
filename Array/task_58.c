#include<stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int arr[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		if (arr[i] >= 0 && arr[i] <= 10) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}

