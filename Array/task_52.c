#include<stdio.h>

int main() {
	int i;
    int arr[10];
    int sum = 0;
    for (i = 0; i < 10 ; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
    	sum += arr[i];
	}
    printf("%d\n", sum);
    return 0;
}
