#include "main.h"
/**
 * count - returns length of a string
 * @str: string whose lenght is determined
 * Return: lenght of str
 */
int count(char *str)
{
	int i = 0;
	int total = 0;

	if (str == NULL)
		return (0);
	while (i > -1)
	{
		if (str[i] != '\0')
		{
			total++;
			i++;
		}
		else
			break;
	}
	return (total);
}
/**
 * str_concat - returns mem address of newly joined string
 * @s1: first string
 * @s2: second string
 * Return: returns mem address of new string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *p;
	int len1 = count(s1);
	int len2 = count(s2);

	p = malloc(len1 + len2 + sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];
	return (p);
}
