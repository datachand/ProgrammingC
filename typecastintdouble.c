#include <stdio.h>

int main() {
	int a = 67;
	double b;
	b = a;

	printf("%f\n", b);

	double c = 89;
	int d;

	d = (int) c; // Double "c" is typecasted to Integer "d"

	printf("%d\n", d);

	return 0;
}