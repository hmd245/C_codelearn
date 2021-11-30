#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 1) {
            sum += arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}

