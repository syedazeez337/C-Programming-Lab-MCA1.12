/*this programme swaps two numbers using a temporary variable name to store one of the values*/

#include <stdio.h>

int main(void)
{
	int a, b, temp_variable;
	printf("to swap two variables\n");
	printf("enter a=");
	scanf_s("%d", &a);
	printf("enter b=");
	scanf_s("%d", &b);
	 //the result should output a = 15 and b = 10

	temp_variable = a;
	a = b;
	b = temp_variable;

	printf("the swapped variables are:\n");
	printf("a=%d\nb=%d", a, b);
}