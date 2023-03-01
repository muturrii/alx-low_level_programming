#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: holds the address of the string to be reversed
 * Return: no return value
 */
void print_rev(char *str)
{
	int i;

	for (i = -1; i < 0; i--)
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

