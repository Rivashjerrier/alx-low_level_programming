#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: head node
 * @n: integer new node
 *
 * Return: address of the new element
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *x;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	if (*head == NULL)
	{
		*head = last_node;
	}
	x = *head;
	while (x->next)
	{
		x = x->next;
		x->next = last_node;
		last_node->prev = x;
	}
	return (last_node);
}
