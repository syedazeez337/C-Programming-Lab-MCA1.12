/*programme swapping without using temporary variable*/

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("enter a=");
	scanf_s("%d", &a);
	printf("enter b=");
	scanf_s("%d", &b);

	//swapping using addition and subtraction method

	a = a + b;  //for example a=13 b=17 a=a+b=30
	b = a - b;  // b=a-b=30-17=13; the new value of b=13
	a = a - b;  // a=a-b=30-13=17; the new value of a=17
	printf("after swapping\n");
	printf("a=%d\nb=%d", a, b);
}