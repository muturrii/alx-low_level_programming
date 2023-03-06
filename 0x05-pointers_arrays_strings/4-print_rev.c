#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: holds the address of the string to be reversed
 * Return: no return value
 */
void print_rev(char *str)
{
	int tot = 0;

	while (*(str + tot) != '\0')
		tot++;
	while (-1 < tot)
	{
		_putchar(*(str + tot));
		tot--;
	}
	_putchar('\n');
}
