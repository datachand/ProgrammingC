#include <stdio.h>

int main() {
	int n; 
	printf("Please enter the size => \t");
	scanf("%d",&n );

	// Triangle of width n and height (2n-1)

	int i, j, k;

	// First loop will loop the number of newlines
	for(i=1; i <= (2*n); i++) {
		// Second loop will loop the number of *

		for(j = 1; j <= (n - (abs(n-i))); j++) { // "abs" to truncate negative sign
			printf("*");
		}
		printf("\n");
	}
}