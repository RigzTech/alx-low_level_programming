#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_L;

	while ((current_L = head) != NULL)
	{
		head = head->next;
		free(current_L->str);
		free(current_L);
	}
}
