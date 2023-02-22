#include <stdio.h>

/**
 * main - prints the fibonacci
 *
 * Return: no return
 */
void main(void)
{
	int a = 1;
	int b = 2;
	int i;

	printf("%d, %d, ", a , b);
	for (i = 0; i < 47; i++)
	{
		printf("%d, ", a + b);
		a = a + b;
		printf("%d, ", a + b);
		b = a + b;
	}
	printf("%d, ", a + b);
	a = a + b;
	printf("%d\n", a + b);
}
