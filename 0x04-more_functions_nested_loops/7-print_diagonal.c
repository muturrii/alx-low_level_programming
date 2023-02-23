#include "main.h"

/**
 * print_diagonal - prints _ n number of times
 * @n: holds the value
 * Return: no return value
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
