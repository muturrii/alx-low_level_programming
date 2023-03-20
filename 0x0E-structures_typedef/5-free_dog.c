#include "dog.h"
/**
 * free_dog - frees a dog struct
 * @d: address of struct
 * Return: no return
 */
void free_dog(dog_t *d)
{
	free(d);
}
