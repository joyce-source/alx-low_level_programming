#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* Update head node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update pointers */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

