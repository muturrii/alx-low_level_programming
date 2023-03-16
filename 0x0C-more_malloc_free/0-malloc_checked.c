#include "main.h"
/**
 * malloc_checked - checks if malloc works
 * @b: size of malloc
 * Return: returns pointer from malloc
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
