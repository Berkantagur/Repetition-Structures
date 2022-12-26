#include<stdio.h>
#include<stdlib.h>

int main(void) {

	/*
	int numbers[] = { 100,200,300,400,500,600 };

	int x;
	x = numbers[5];
	printf("%d", x);
	*/

	/*
	int oddNumbers[] = {1,3,5,7,9};
	printf("%d", oddNumbers[2]);
	*/

//	char city [] = { 'A','n','k','a','r','a' };
//  printf("%s", city);


	/*
	int numbers[] = { 10,20,30,40,50,60 };
	int i;
	for (i = 0; i < 6; i++) {
		printf("%d\n", numbers[i]);
	}

	int sum = 0;
	for (i = 0; i < 6; i++) {
		sum = sum + numbers[i];
	}
	printf("%d\n", sum);

	int factor[] = { 1,2,3,4,5,6 };
	int factorial = 1;
	int k;
	for (k = 1; k < 6; k++) {
		factorial = factorial * factor[k];
	}
	printf("F:%d\n", factorial);
	*/

	char city[3][15];
	int a;

	for (a = 0; a < 3; a++)
	{
		printf("Please enter %d. city: ", a + 1);
		scanf("%s", &city[a]);
	}
	printf("\n");
	for (a = 0; a <= 2; a++)
	{
		printf("%d.City:%s\n", a + 1, city[a]);
	}
	

	int set[100];
	int j, number;

	printf("Chracter numbers: ");
	scanf("%d", &number);

	for (j = 0; j < number; j++) {
		printf("Please enter set's %d value: ",j+1);
		scanf("%d", &set[j]);
	}

	int sum = 0 , average;
	for (j = 0; j < number; j++) {
		sum = sum + set[j];
	}
	printf("SUM:%d\n", sum);

	for (j = 0; j < number; j++) {
		average = sum / number;
	}
	printf("AVE:%d", average);

	return 0;
}