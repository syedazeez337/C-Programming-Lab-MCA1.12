/*sum of the digits of a given number*/

#include <stdio.h>

int main(void)
{
	int num, sum = 0, rem, ini;

	printf("Enter a number:");
	scanf_s("%d", &num);

	ini = num; // initial number is equals to number entered by the user

	while (num != 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("The sum of the %d is:%d\n", ini, sum);
}