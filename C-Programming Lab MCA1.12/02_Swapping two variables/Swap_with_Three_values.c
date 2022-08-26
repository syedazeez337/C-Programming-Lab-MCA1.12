/*1.Write a programme in C which reads three values a,b,c and swap them as 
a to b
b to c
c to a*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	//int Tot;
	printf("Enter three values a b c:");
	scanf_s("%d %d %d", &a, &b, &c);

	a = a + b + c;
	b = a - b - c;
	c = a - b - c;
	a = a - b - c;

	printf("After Swapping the a b c are:%d %d %d", a, b, c);
}