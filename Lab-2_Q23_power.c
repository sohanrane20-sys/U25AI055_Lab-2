/*
Objective: Q23 To calculate power of a number
Author: Sohan
*/
#include <stdio.h>
int main() {
	int base, exponent, power, i;
	printf("Enter base: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exponent);
	power = 1;
	for (i = 0; i < exponent; i++) {
		power *= base;
	}
	printf("Power = %d", power);
	return 0;
}