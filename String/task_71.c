#include<stdio.h>
#include<string.h>

int main() {
    char str_name1[100], str_name2[100];
    scanf("%s%s", str_name1, str_name2);
    if (strcmp(str_name1, str_name2) == 0) {
        printf("two people having the same name\n");
    } else {
        printf("two people don't have the same name\n");
    }
    return 0;
}

