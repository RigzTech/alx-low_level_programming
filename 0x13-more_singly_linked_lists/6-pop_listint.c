#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int xnode;
	listint_t *x;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	xnode = current->n;

	x = current->next;

	free(current);

	*head = x;

	return (xnode);
}
