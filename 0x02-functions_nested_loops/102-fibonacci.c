#include <stdio.h>

/**
 * main - prints the fibonacci
 *
 * Return: no return
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 23; i++)
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
