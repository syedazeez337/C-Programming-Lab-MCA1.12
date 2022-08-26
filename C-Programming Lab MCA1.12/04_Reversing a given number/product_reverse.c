/*write a programme in c to find the product of a given number with reverse of the given number.*/

#include <stdio.h>

int main(void)
{
	int num, prod, rem, rev = 0, ini;

	printf("enter a number:");
	scanf_s("%d", &num);

	ini = num;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	prod = ini * rev;
	printf("the product of the number %d and its reverse %d is:%d", ini, rev, prod);
}