#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_l;

	new = malloc(sizeof(dlistint_t));
	if (new_l == NULL)
		return (NULL);

	new_l->n = n;
	new_l->prev = NULL;
	new_l->next = *head;
	if (*head != NULL)
		(*head)->prev = new_l;
	*head = new_l;

	return (new_l);
}
