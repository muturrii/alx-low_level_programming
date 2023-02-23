#include "main.h"

/**
 * print_square - prints _ n number of times
 * @size: holds the value
 * Return: no return value
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
