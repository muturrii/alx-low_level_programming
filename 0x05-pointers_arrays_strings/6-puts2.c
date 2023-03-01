#include "main.h"

/**
 * puts2 - prints the string onto stdout
 * @str: holds the address of the string
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i > -1; i = i + 2)
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

