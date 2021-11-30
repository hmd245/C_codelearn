#include<stdio.h>

int main() {
    int a, b;
    int i;
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
