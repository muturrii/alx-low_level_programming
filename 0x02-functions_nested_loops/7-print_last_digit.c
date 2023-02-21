#include "main.h"

/**
 * print_last_digit - prints the last digit of a value
 * @n: holds value to be used
 * Return: the last digit of the value
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n % 10);
}
