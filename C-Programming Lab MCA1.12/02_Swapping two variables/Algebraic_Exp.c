/*4.Write programme in C to find the value of (aSQR-bSQR)-(a+b)x(a-b)*/

#include <stdio.h>

int main()
{
	int a, b;
	int value;

	printf("Enter the values a b:");
	scanf_s("%d %d", &a, &b);

	value = (a * a - b * b) - (a + b) * (a - b); //The output is 0

	printf("The final value of the expression is:%d", value);
}