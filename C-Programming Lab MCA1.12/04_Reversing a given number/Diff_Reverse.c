/*Write a programme to read a number n and find the difference of the number and its reverse.*/

#include <stdio.h>

int main(void)
{
	int num, rev = 0, sub=0, rem, ini,ans;

	printf("Enter the number:");
	scanf_s("%d", &num);

	ini = num;

	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
		
	}
	ans = ini - rev;
	printf("The difference of the number and its reverse of the number %d is:%d\n", ini, ans);
}