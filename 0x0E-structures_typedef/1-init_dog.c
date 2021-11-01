#include "dog.h"

/**
 *init_dog - Initialize a variable of type struct dog.
 *@d: Pointer to dog's structure.
 *@name: String of characters (name of the dog).
 *@age: Type float (name of the dog).
 *@owner: String of characters (name of the owner).
 *Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
