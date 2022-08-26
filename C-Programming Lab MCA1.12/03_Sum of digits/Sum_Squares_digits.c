/*wrtie  a programme to find the sum of the squares of digits of a given number*/

#include <stdio.h>

int main(void)
{
	int num, sum = 0, ini, rem;
	printf("enter a number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		rem = rem * rem;
		sum = sum + rem;
		num = num / 10;
	}
	printf("the sum of the number %d is:%d", ini, sum);
}