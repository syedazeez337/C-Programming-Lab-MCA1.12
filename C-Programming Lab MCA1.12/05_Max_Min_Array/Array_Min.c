/*Write a programme in C to find minimum number in an array*/

#include <stdio.h>

int main(void)
{
	int a[20], i, n, min;

	printf("Enter number of elements:");
	scanf_s("%d", &n);

	printf("Enter elements in the array:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	min = a[0];

	for (i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("The minimum number in the array is:%d", min);
}