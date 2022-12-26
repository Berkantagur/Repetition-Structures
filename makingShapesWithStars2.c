#include<stdio.h>
#include<stdlib.h>

int main(void) {

//Creating a quadrilateral based on the aspect ratio entered from the keyboard

	int width, length, x, y;

	printf("Please enter a width value: ");
	scanf("%d", &width);
	printf("Please enter a length value: ");
	scanf("%d", &length);

	for (x = 1; x <= length; x++) {
		for (y = 1; y <= width; y++) {
			printf("* ");
		}
		printf("\n");
	}


return 0;
}