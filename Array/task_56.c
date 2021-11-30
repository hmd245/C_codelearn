#include<stdio.h>

int main() {
    int n, k, i;
    int count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

