/*
	Objective: To check whether or not given character is small case using conditional operator
	Author: Sohan
*/
#include <stdio.h>
int main() {
	char character;
	int ascii;
    printf("Enter a character: ");
    scanf("%c", &character);
    ascii = (int) character;
    printf((ascii >= 97 && ascii <= 122) ? "Small case letter" : "Not a small case letter");
	return 0;
}