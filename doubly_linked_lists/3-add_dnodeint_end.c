#include "lists.h"
/**
 *add_dnodeint_end - function add a new node at the end list
 *@head: doble pointer to the head of list
 *@n: the element to add the new node
 *Return: the adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endElement;
	dlistint_t *ptr = *head;

	endElement = malloc(sizeof(dlistint_t));
	if (!endElement)
	{
		return (NULL);
	}
	endElement->n = n;
	endElement->next = NULL;
	if (*head == NULL)
	{
		endElement->prev = NULL;
		*head = endElement;
	}
	else
	{
		for (; ptr->next; ptr = ptr->next)
		{}
		endElement->prev = ptr;
		ptr->next = endElement;
	}
	return (endElement);
}
