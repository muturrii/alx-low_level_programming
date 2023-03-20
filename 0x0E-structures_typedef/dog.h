#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct to store dogs info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: information about dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
