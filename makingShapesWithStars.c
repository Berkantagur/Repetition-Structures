#include<stdio.h>
#include<stdlib.h>

int main(void) {

	/*
	int i;

	for (i = 1; i <= 5; i++) {
		printf("* * * * *\n");
	}

	int j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}


	for (i = 5; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}printf("\n");
	}
	*/

	/*
	for (i = 1; i <= 5; i++) {
		for (j = 5; j >= i; j--) {
			printf("* ");
		}
		printf("\n");
	}
	*/


	int i, k, l, j;
	
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 20 - 4 * i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	

	for (k = 0; k <= 4; k += 1) {
		for (l = 4; l >= k; l -= 1) {
			printf("* ");
		}
		for (l = 1; l <= 4 * k; l += 1) {
			printf(" ");
		}
		for (l = 4; l >= k; l -= 1) {
			printf("* ");
		}
		printf("\n");
	}



/*
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = 1; j <= 10 - 2 * i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (k = 0; k <= 4; k += 1) {
		for (l = 4; l >= k; l -= 1) {
			printf("*");
		}
		for (l = 1; l <= 2 * k; l += 1) {
			printf(" ");
		}
		for (l = 4; l >= k; l -= 1) {
			printf("*");
		}
		printf("\n");
	}
*/


	return 0;
}