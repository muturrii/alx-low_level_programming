#include "main.h"

/**
 * rev_string - reverse string
 * @s: holds the address of the sing to be reversed
 * Return: no return value
 */
void rev_string(char *s)
{
	char a;
	int tot = 0;
	int temp = 0;

	while (*(s + tot) != '\0')
		tot++;

	while (tot != temp)
	{
		a = *(s + temp);
		*(s + temp) = *(s + tot);
		*(s + tot) = a;
		tot--;
		temp++;
	}
}
