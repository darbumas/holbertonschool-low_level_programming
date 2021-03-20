#include "lists.h"

/**
 * add_node - ƒ() returns a pointer to a new node added
 * at the head of linked_t.
 * @head: pointer to pointer to the beginning of the list.
 * @str: pointer to data to be dupplicated
 * Return: pointer to new node (the duplicated data).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *copy_node;
	unsigned int length = 0;

	copy_node = malloc(sizeof(list_t));
	if (copy_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	copy_node->len = length;
	copy_node->next = *head;
	copy_node->str = strdup(str);
	*head = copy_node;

	return (copy_node);
}
