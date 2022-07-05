#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int x, y, z;
	char *a, *b;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;
	a = malloc(sizeof(char) * x + 1);
	if (a == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	b = malloc(sizeof(char) * y + 1);

	if (b == NULL)
	{
		free(a);
		free(new_dog);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		a[z] = name[z];
	for (z = 0; z <= y; z++)
		b[z] = owner[z];

	new_dog->name = a;
	new_dog->age = age;
	new_dog->owner = b;

	return (new_dog);
}
