#include <stdio.h>

int main() {
	float pi = 3.14;
	float pi1, pi2 = 0.00;

	pi1 = pi;

	printf("From PI1 => %f\n", pi1);

	pi = pi2; //Reverse Assignment is also valid

	printf("From PI = PI2 => %f\n", pi2);

	return 0;
}