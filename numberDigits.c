#include<stdio.h>
#include<stdlib.h>

int main(void) {

//Dividing a four-digit number into its digits

	int number, a, b, c, d;

	printf("Please enter a number: ");
	scanf("%d", &number);

	
	a = (number / 100) % 10;
	b = (number / 10) % 10;
	c = number % 10;
	d = (number / 1000) % 10;

	if (number >= 1000 && number < 10000 || number <= -1000 && number >- 10000) 
	{
		printf(" %d\n %d\n %d\n %d", d, a, b, c);
	}
	else
		printf("Invalid value!!!");
	
	return 0;
}