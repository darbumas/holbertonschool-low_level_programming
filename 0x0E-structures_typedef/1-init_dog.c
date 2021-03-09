#include "dog.h"
#include <stddef.h>

/**
 * init_dog - ƒ() initializes a var of type "struct dog"
 * @d: pointer to struct; var to be initialized.
 * @name: pointer to char; name of new dog.
 * @age: float type, doggie's age.
 * @owner: pointer to char; doggies' owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
	}
}
