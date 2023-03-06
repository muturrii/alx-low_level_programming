#include "main.h"
/**
 * _strcpy - copys string
 * @src: original string
 * @dest: new string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int tot = 0;
	int i = 0;

	while (*(src + tot) != '\0')
		tot++;
	tot++;
	while (i < tot)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
