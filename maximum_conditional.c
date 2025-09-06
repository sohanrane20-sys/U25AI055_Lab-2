/*
	Objective: To print maximum of three numbers using conditional operator (?:)
	Author: Sohan
*/
#include <stdio.h>
int main() {
	int a, b, c, d, maximum;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	d = ((a > b) ? a : b);
	maximum = ((d > c) ? d : c);
	printf("Maximum = %d", maximum);
	return 0;
}