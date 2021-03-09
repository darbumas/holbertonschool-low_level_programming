#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure with name, owner and age.
 * @name: name of doggie
 * @owner: owner of doggie
 * @age: age of doggie
 *
 * Description: struct containing description of doggie with name, owner and
 * age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
