#include "main.h"

/**
 * puts_half - prints out halfthe string
 * @str: holds address of string
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int k = 0;
	int j;
	int n;

	for (j = 0; j > -1; j++)
	{
		if (str[j] != '\0')
			k++;
		else
			break;
	}
	if (k % 2)
	{
		n = (k - 1) / 2;
		n++;
	}
	else
		n = k / 2;
	for (i = 0; i > -1; i++)
	{
		if (str[n + i] != '\0')
			_putchar(str[n + i]);
		else
		{
			_putchar('\n');
			break;
		}
	}
}
