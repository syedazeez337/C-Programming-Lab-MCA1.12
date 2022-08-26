/*3.Write a programme in C to read three values a,b,c and print the sum of the three values
and product of the three values*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int SUM_abc;
	int MUL_abc;
	printf("Enter the values of a b c:");
	scanf_s("%d %d %d", &a, &b, &c);

	SUM_abc = a + b + c;
	MUL_abc = a * b * c;

	printf("The sum of a,b,c=%d\n", SUM_abc);
	printf("The product of a,b,c=%d\n", MUL_abc);
}