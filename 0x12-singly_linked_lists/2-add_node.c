#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a linked list.
 * @head: double pointer to the list_t list.
 * @trt: new string to add in the node.
 *
 * Return: the address of the new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *trt)
{
	list_t *new;
	unsigned int len = 0;

	while (trt[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->trt = strdup(trt);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
