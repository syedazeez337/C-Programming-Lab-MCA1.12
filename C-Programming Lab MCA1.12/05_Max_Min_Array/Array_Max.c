/*Write a programme in C to find the maximum of a given array.*/

#include <stdio.h>

int main(void)
{
	int a[20], i, n, max;

	printf("Enter number of elements:");
	scanf_s("%d", &n);

	printf("Enter the elements of the array:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	max = a[0];

	for (i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		printf("The largest number in the given array:%d", max);
	}
	
}