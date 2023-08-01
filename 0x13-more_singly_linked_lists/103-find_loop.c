#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t2;
	listint_t *previous;

	t2 = head;
	previous = head;
	while (head && t2 && t2->next)
	{
		head = head->next;
		t2 = t2->next->next;

		if (head == t2)
		{
			head = previous;
			previous =  t2;
			while (1)
			{
				t2 = previous;
				while (t2->next != head && t2->next != previous)
				{
					t2 = t2->next;
				}
				if (t2->next == head)
					break;

				head = head->next;
			}
			return (t2->next);
		}
																}

	return (NULL);
}
