#include<stdio.h>

int main() {
	int n;
	char luaChon;
	while(1){
		scanf("%d", &n);
		if(n == -1 || n < 0){
			printf("ky tu nhap vao khong hop le!\n");
		}
		else if(n % 2 == 0 && n != 0){
			printf("n is an even number\n");
		}
		else if(n == 0){
			printf("n la so 0 !\n");
		}
		else if(n % 2 == 1){
			printf("n is an odd number\n");
		}
		n = -1;
		luaChon = getchar();
		if(luaChon == 'e')
		break;
		// Xoa bo dem, ky tu dac biet
		//while(getchar()!='\n');
	}

	return 0;
}

