#include "main.h"
/**
 * print_dog - prints details of a struct
 * @d: holds the address of the struct
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
