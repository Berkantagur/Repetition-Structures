#include<stdio.h>
#include<stdlib.h>

int main() {

	char name[15], surname[15];
	int age;

	printf("Please enter a name: ");
	scanf("%s", &name);

	printf("Please enter a surname: ");
	scanf("%s", &surname);

	printf("Please enter a age: ");
	scanf("%d", &age);

	printf("ID CARD\n------------------------\n");
	printf("Name:%s\nSurname:%s\nAge:%d\n", name, surname, age);


	return 0;
}