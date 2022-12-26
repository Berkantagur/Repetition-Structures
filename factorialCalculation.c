#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//FACTORIAL CALCULATION
	
	int f, number;
	int factorial = 1;
	printf("Please enter a number between 1-10: ");
	scanf("%d", &number);
	if (number > 0 && number <= 10) {
        
		for (f = 1; f <= number; f++)
		{
			factorial = factorial * f;
		}
		printf("The factorial value of number %d : %d", number,factorial);
	}
	else
		printf("Invalid value!!!");
	

	return 0;
}