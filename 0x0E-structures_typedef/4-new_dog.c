#include "main.h"
/**
 * new_dog - func to add new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: mem address
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
