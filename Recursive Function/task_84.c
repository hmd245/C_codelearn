#include <stdio.h>

int sumOfArray(int arr[1000], int n) {
    if (n == 1) return arr[0];
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumOfArray(arr, n));
    return 0;
}
