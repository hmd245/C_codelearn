#include<stdio.h>

int main() {
    int n, m, i, j;
    int sum = 0;
    int arr[100][100];
    scanf("%d%d", &n, &m);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum += arr[i][j]; 
        }
    }
    printf("%d", sum);
    return 0;
}

