#include "dog.h"

/**
 * free_dog - ƒ() frees pointer to struct in mem.
 * @d: pointer to struct dog.
 *
 * Return: voided.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
