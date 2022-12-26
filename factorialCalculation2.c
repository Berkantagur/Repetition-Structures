#include<stdio.h>
#include<stdlib.h>

int main(void) {

	// While: İlgili şartı sağladığı sürece anlamı taşır


	/*
    //An example of an infinite loop
	int i = 1;
	while (i <= 5) {
		printf("Berkant");
	}
	*/
	
	int numbereven = 1;

	while (numbereven <= 20)
	{
		if (numbereven % 2 == 0)
		{
			printf("%d\n", numbereven);
		}
		numbereven ++;
	}
	


	// FACTORIAL CALCULATION
    
    int number, factorial;
	factorial = 1;

	printf("Please enter a value: ");
	scanf("%d", &number);

	while (number > 1) {
		factorial = factorial * number;
		number--;
	}
	printf("Result: %d", factorial);

	return 0;
}