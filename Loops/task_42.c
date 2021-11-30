#include<stdio.h>

int main() {
    int n, i;
    int giaiThua = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    printf("%d", giaiThua);
    return 0;
}
