#include "dog.h"

/**
 * _strdup - helper ƒ() returns a pointer to a char;
 * which is a copy of string.
 * @str: pointer to a char (string in buffer to copy).
 * Return: pointer to new space in memory; or NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int indx1 = 0, indx2 = 0;

	if (str == NULL)
		return (NULL);
	while (str[indx1] != '\0')
		indx1++;
	ptr = malloc((1 + indx1) * (sizeof(char)));
	if (ptr != NULL)
	{
		while (indx2 < indx1)
		{
			ptr[indx2] = str[indx2];
			indx2++;
		}
		ptr[indx2] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
/**
 * new_dog - ƒ() returns a pointer to a struct; creates a new dog.
 * @name: name of doggie
 * @age: age of doggie
 * @owner: owner of doggie
 * Return: pointer to new struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = _strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	newDog->owner = _strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}
