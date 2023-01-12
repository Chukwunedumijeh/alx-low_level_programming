#include "lists.h"
/**
 * print_dlistint - prints all the nodes of a list
 * @h: is the pointer to node structure
 * Return: the amount of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t nodes = 0;

	while (node)
	{
		printf("%i\n", node->n);
		node = node->next;
		nodes++;
	}
	return (nodes);
}
