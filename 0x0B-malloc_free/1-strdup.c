#include "main.h"
/**
 * _strdup - returns mem address for duplicated string
 * @str: contains the address of the string to be dupped
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	int i;
	char *p;
	int len = 0;

	for (i = 0; i > -1; i++)
	{
		if (str[i] != '\0')
			len++;
		else
			break;
	}
	if (str == NULL)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	return (p);
}
