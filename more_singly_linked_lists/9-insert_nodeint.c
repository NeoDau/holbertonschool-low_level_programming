#include "lists.h"
/**
 *insert_nodeint_at_index - function inserted a new nodo
 *@head: double pointer to head node
 *@idx: index of de list
 *@n: the data to enter for the new node
 *Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a = *head;
	listint_t *newNodo;
	unsigned int b = 0;

	if (a == NULL && idx != 0)
	{
		return (NULL);
	}
	for (; a && b < idx - 1; a = a->next)
	{
		b++;
	}
	newNodo = malloc(sizeof(listint_t));
	if (newNodo != NULL)
	{
		newNodo->n = n;
		if (idx == 0)
		{
			newNodo->next = *head;
			*head = newNodo;
			return (newNodo);
		}
		if (b + 1 == idx)
		{
			newNodo->next = a->next;
			a->next = newNodo;
			return (newNodo);
		}
	}
	return (NULL);
}
