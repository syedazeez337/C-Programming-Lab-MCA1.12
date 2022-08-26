/*2.Write a programme in C to find the value of aSQR+bSQR+cSQR when the vlaues a,b,c are given?*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int Sum_of_Squares;
	printf("Enter the values a b c:");
	scanf_s("%d %d %d", &a, &b, &c);

	Sum_of_Squares = a * a + b * b + c * c;
	printf("The sum of squares of a b c is %d\n", Sum_of_Squares);
}