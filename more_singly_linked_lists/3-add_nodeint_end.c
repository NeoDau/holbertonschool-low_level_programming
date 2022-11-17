#include "lists.h"
/**
 *add_nodeint_end - function add node end list
 *@head: pointer to list
 *@n: int to add node
 *Return: endNodo
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *endNodo;

	endNodo = malloc(sizeof(listint_t));

	if (!endNodo)
	{
		return (NULL);
	}
	endNodo->n = n;
	endNodo->next = NULL;
	if (*head == NULL)
	{
		*head = endNodo;
		return (endNodo);
	}

	for (; ptr->next; ptr = ptr->next)
	{}
	ptr->next = endNodo;

	return (endNodo);
}
