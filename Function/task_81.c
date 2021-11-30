#include <stdio.h>

double circumference(double r) {
	double circum;
	circum = 2 * 3.14 * r;
	return circum;
}

int main() {
	double r;
	scanf("%lf", &r);
	printf("%f", circumference(r));
	return 0;
}

