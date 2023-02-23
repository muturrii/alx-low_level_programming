#include "main.h"

/**
 * print_line - prints _ n number of times
 * @n: holds the value
 * Return: no return value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
