#include "main.h"

/**
 * _isdigit - returns value depending on case
 *
 * @c: holds value to be checked
 * Return: (1) if digit (0) if not digit
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

