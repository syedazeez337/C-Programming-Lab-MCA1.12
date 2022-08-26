/*Write a programme in C to find the product of all the digits of a given number*/

#include <stdio.h>

int main(void)
{
	int num, prod = 1, ini, rem;

	printf("Enter a number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		prod = prod * rem;
		num = num / 10;
		
	}
	printf("The product of the digits of given number %d is:%d", ini, prod);
}