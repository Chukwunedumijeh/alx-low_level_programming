#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node to a linked list.
 * @head: head of the linked list.
 * @str: string to add.
 * Return: pointer of the new element added to linked list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
