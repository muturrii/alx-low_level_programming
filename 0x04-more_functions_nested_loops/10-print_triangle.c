#include "main.h"

/**
 * print_triangle - prints the triangle using #
 * @size: holds the height of triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int f = 1;
	int k = size;
	int j;
	int i;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < (k - 1); i++)
				_putchar(' ');
			for (i = 0; i < f; i++)
				_putchar('#');
			k--;
			f++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
