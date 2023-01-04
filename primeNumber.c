#include<stdio.h>
#include<stdlib.h>

int main() {

	int number, i, counter = 0;

	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number > 0) {


			for (i = 1; i <= number; i++)
			{

				if (number % i == 0)

					counter++;
			}

				if (counter == 2) 
				printf("%d is a prime number.", number);
				
				else
				printf("%d is not a prime number.", number);


		}
	else
		printf("Invalid value!");


	return 0;
}