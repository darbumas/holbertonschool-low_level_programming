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
	unsigned int indx1 = 0, indx2 = 0;

	if (str == 0)
		return (NULL);
	while (str[indx1])
		indx1++;
	indx1++;
	ptr = malloc(indx1 * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (indx2 <= indx1)
	{
		ptr[indx2] = str[indx2];
		indx2++;
	}
	return (ptr);
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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (new_dog);
}
