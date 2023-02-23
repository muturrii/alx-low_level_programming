#include "main.h"

/**
 * _isupper - returns value depending on case
 *
 * @c: holds value to be checked
 * Return: (1) if uppercase (0) if not uppercase
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}

