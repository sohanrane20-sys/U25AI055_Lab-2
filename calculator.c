/*
	Objective: A simple calculator using switch case
	Author: Sohan
*/
#include <stdio.h>
int main() {
	int a, b;
	char operator;
	printf("Enter operator: ");
	scanf("%c", &operator);
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	switch ((int) operator) {
		case 43:
			printf("%d", a + b);
			break;
		case 45:
			printf("%d", a - b);
			break;
		case 42:
			printf("%d", a * b);
			break;
		case 47:
			printf("%d", a / b);
			break;
		default:
			printf("Not valid");
	}
	return 0;
}