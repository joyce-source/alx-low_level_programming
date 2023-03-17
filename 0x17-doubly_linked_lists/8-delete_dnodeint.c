#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head == NULL) /* Empty list */
		return (-1);
	if (index == 0) /* If head needs to be removed */
	{
		*head = current->next; /* Change head */
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current); /* Free old head */
		return (1);
	}
	/* Find the node before the one to be deleted */
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)

	/* If index is greater than the number of nodes */
	return (-1);
	/* Delete the node at index */
	temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);
	return (1);
}
