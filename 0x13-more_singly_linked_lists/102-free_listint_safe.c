#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *_hptr, *new, *_add;
	listint_t *current;

	_hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = _hptr;
		_hptr = new;

		_add = _hptr;

		while (_add->next != NULL)
		{
			_add = _add->next;
			if (*h == _add->p)
			{
				*h = NULL;
				free_listp2(&_hptr);
				return (nnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&_hptr);
	return (nnodes);
}
