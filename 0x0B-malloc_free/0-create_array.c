#include <main.h>
/**
 * create_array - returns the address of an array made
 * @size: size of the array to be made
 * @c: character that array should be initialized with
 * Return: address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);		
	p[0] = c;
	return (p);
}
