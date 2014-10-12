#include <stdio.h>
#define PI 3.14

int main() {
	const float pi = 3.14;
	printf("From constant => %f\n", pi);
	printf("From define => %f\n", PI);
	return 0;
}