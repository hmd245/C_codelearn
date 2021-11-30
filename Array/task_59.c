/* mang so nguyen n phan tu arr. 
	sap xep phan tu cua mang theo thu tu tang dan*/

#include<stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				/* debug
				printf("%d\n", arr[0]);
				printf("%d\n", arr[1]);
				printf("%d\n", arr[2]);
				printf("%d\n", arr[3]);
				printf("%d\n", arr[4]);
				printf("%d\n", arr[5]);
				printf("%d\n", arr[6]);
				*/
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

