#include<stdio.h>

int main() {
    unsigned int a, b, i;
    unsigned int exponentiation = 1;
    scanf("%d%d", &a, &b);
    for (i = 1; i <= b; i++) {
        exponentiation *= a; 
    }
    printf("%d", exponentiation);
    return 0;
}
