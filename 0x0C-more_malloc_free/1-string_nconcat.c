#include "main.h"
/**
 * count - returns length of a string
 * @str: string to be measured
 * Return: length
 */
int count(char *str)
{
	int tot = 0;
	int i;

	for (i = 0; i > -1; i++)
	{
		if (str[i] == '\0')
			break;
		tot++;
	}
	return (tot);
}
/**
 * string_nconcat - returns address of new string
 * @s1: first string
 * @s2: second string
 * @n: number to be added from s2
 * Return: mem address of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = count(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = count(s2);
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
	{
		if (i == len2)
			break;
		p[i + len1] = s2[i];
	}
	return (p);
}
