/*Write a programme in C to find the sum of a given number and its reverse.*/

#include <stdio.h>

int main(void)
{
	int num, rem, ini, rev = 0, sum;

	printf("Enter a number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	sum = ini + rev;
	printf("The sum of the given number %d and reverse %d is:%d", ini, rev, sum);
}