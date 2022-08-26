/*Write a programme in C to find whether the difference between the given number and it difference
is divisble by 9.*/

#include <stdio.h>

int main(void)
{
	int num, rem, rev = 0, sub = 0, ini;

	printf("Enter the number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if (rev % 9 == 0)
	{
		printf("The reverse of the given number %d is divisible by 9.", rev);
	}
	else
		printf("The reverse of given number %d is NOT divisible by 9.", rev);
}