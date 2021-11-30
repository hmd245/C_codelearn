#include<stdio.h>
#include<string.h>

void show(char s[100]) {
	int i;
    for (#include <stdio.h>

void sortArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] < arr[j]) {
				arr[i] = arr[j];
			}
		}
	}
}

int main() {
	int n;
	int arr[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sortArray(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    printf("%s\n", s);
}

int main() {
    char s1[100], s2[100], s3[100];
    scanf("%s %s %s", s1, s2, s3);
    show(s1);
    show(s2);
    show(s3);
    return 0;
}

