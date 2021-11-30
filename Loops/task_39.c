#include<stdio.h>

int main() {
    int a, b;
    int i, sum =0;
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++) {
        sum += i;
//        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
