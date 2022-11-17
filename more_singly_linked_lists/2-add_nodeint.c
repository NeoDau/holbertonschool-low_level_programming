#include "lists.h"
/**
 *add_nodeint - nction add new node
 *@head: node
 *@n: data of node
 *Return: newNodo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNodo;

	newNodo = malloc(sizeof(listint_t));
	if (!newNodo)
	{
		return (NULL);
	}

	newNodo->n = n;
	newNodo->next = *head;

	*head = newNodo;
	return (newNodo);
}
