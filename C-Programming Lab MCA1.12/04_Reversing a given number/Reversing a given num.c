/*Write a programme in C to reverse the given number*/

#include <stdio.h>

int main(void)
{
	int num, ini, rem, rev = 0;

	printf("Enter the number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
		
	}
  printf("The reverse of the given number %d is:%d", ini, rev);
}