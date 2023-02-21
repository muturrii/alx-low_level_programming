#include "main.h"

/**
 * print_sign - prints a value depending on the sign of number
 * @n: holds the number to be checked
 *
 * Return: (0) if number is 0, (1) if number
 * is greater that zero, (-1) if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
