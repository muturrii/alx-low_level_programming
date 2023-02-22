#include <stdio.h>
/**
 * main - prints the sum of the evens in fibonacci
 *
 * Return: (0) Alwas success
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int total = 2;
	int i;

	for (i = 1; i > 0; i++)
	{
		a = a + b;
		if ((a + b) > 4000000)
		{
			printf("%d\n", total);
			return (0);
		}
		if ((a + b) % 2 == 0)
			total = total + (a + b);
		b = a + b;
		if ((a + b) > 4000000)
		{
			printf("%d\n", total);
			return (0);
		}
		if ((a + b) % 2 == 0)
			total = total + (a + b);
	}
}
