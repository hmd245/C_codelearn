#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int length = strlen(s);
    int i;
    for (i = 0; i < length; i++) {
        if (s[i] == '3') {
            s[i] = 'e';
        }
    }
    printf("%s", s);
    return 0;
}

