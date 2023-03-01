#include "main.h"

/**
 * _strlen - returns the lenght of the strng
 * @s: holds the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; i > -1; i++)
	{
		if (s[i] != '\0')
			j++;
		else
			break;
	}
	return (j);
}
