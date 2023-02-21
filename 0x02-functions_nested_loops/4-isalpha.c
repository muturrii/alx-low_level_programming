#include "main.h"

/**
 * _isalpha - returns value depending on case
 *
 * @c: holds value to be checked
 * Return: (0) if lowercase (1) if not lowercase
 */
int _isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (1);
	else
		return (0);
}
