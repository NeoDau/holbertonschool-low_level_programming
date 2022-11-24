#include "lists.h"
/**
 *insert_dnodeint_at_index - function insert a node at given index in double
 *linked list
 *@h: double pointer to the list
 *@idx: index of the node to insert
 *@n: data to insert
 *Return: adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newElement;
	dlistint_t *ptr = *h;
	unsigned int a = 0;

	newElement = malloc(sizeof(dlistint_t));
	if (!newElement || !h)
	{
		return (NULL);
	}
	newElement->n = n;
	newElement->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; ptr && a < idx; a++)
	{
		if (a == idx - 1)
		{
			if (ptr->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			newElement->next = ptr->next;
			newElement->prev = ptr;
			ptr->next->prev = newElement;
			ptr->next = newElement;
			return (newElement);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (NULL);
}
