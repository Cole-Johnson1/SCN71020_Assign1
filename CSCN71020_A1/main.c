#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);


	switch (inputNum)
	{
	case 1:
		add();
	}

	switch (inputNum) {
	case 2:
		subtract();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("\nEnter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("\n%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double num1, num2, result;
	printf("Please enter the first value: ");
	scanf_s("%lf", &num1);
	printf("\nPlease enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 - num2;
	printf("\n%lf - %lf = %lf\n", num1, num2, result);
}