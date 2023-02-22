#include <stdio.h>

/**
 * main - prints the fibonacci
 *
 * Return: no return
 */
int main(void)
{
	long long int a = 1;
	long long int b = 2;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 0; i < 23; i++)
	{
		printf("%d, ", a + b);
		a = a + b;
		printf("%d, ", a + b);
		b = a + b;
	}
	printf("%d, ", a + b);
	a = a + b;
	printf("%d\n", a + b);
	return (0);
}
