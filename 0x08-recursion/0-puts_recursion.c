#include "main.h"
/**
 * _puts_recursion - prints  astring onto stdout
 * @s: holds the string
 * Return: no return valeu
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
