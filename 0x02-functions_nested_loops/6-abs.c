#include "main.h"

/**
 * _abs - gets the absolute value of a value
 * @n: holds the value to be checked
 *
 * Return: the number
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
