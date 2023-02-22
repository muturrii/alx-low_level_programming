#include <stdio.h>

/**
 * main - prints the fibonacci
 *
 * Return: no return
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 47; i++)
	{
		printf("%ld, ", a + b);
		a = a + b;
		printf("%ld, ", a + b);
		b = a + b;
	}
	printf("%ld, ", a + b);
	a = a + b;
	printf("%ld\n", a + b);
	return (0);
}
