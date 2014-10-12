#include <stdio.h>

int main() {
	int n; 
	printf("Please enter the size => \t");
	scanf("%d",&n );

	// Triangle of width and height n

	int i, j;

	// First loop will loop the number of newlines
	for(i=1; i <= n; i++) {
		// Second loop will loop the number of *
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}