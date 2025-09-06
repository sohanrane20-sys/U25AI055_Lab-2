/*
	Objective: To calculate factorial of a number
	Author: Sohan
*/
#include <stdio.h>
int main() {
	int number, i, factorial;
	printf("Enter a number: ");
	scanf("%d", &number);
	factorial = 1;
	for (i = 1; i < number + 1; i++) {
		factorial *= i;
	}
	printf("Factorial = %d", factorial);
	return 0;
}