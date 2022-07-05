#ifndef DOG_H
#define DOG_H


/**
 * struct dog - defines attributes of a dog
 *
 * @name: string containing the name of the dog
 * @age: integer that states the age
 * @owner: string that describes the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);




#endif
