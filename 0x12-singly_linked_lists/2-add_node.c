#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;
	size_t nchar;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newList->len = nchar;
	newList->next = *head;
	*head = newList;

	return (*head);
}
