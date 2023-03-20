#include "main.h"
#include "dog.h"
/**
 * init_dog - used to initialize a struct
 * @d: name of the new cluster
 * @name: the name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
