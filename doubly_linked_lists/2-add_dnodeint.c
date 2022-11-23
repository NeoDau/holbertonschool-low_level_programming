#include "lists.h"
/**
 *add_dnodeint - function adds a node at the begginning list
 *@head: doube pointer to the head of a lis
 *@n: the element to add to the node
 *Return: the address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElement;
	dlistint_t *ptr = *head;

	newElement = malloc(sizeof(dlistint_t));
	if (!newElement)
	{
		return (NULL);
	}
	newElement->n = n;
	if (*head == NULL)
	{
		newElement->next = NULL;
	}
	else
	{
		newElement->next = ptr;
		ptr->prev = newElement;
	}
	newElement->prev = NULL;
	*head = newElement;

	return (newElement);
}
