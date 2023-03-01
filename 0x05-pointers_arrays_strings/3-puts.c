#include "main.h"

/**
 * _puts - prints the string onto stdout
 * @str: holds the address of the string
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i > -1; i++)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		else
		{
			_putchar('\n');
			break;
		}
	}
}

