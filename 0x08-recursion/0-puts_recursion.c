#include "main.h"
/**
 * _puts - prints out the string
 * @s: holds string
 * Return: no return
 */
void _puts(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
/**
 * _puts_recursion - prints  astring onto stdout
 * @s: holds the string
 * Return: no return valeu
 */
void _puts_recursion(char *s)
{
	_puts(s);
	_putchar('\n');
}

