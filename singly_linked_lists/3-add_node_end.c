#include "lists.h"
/**
 *add_node_end - function add new node at the end list
 *@head:doble pointer to list.
 *@str: string to add a node
 *Return: endNode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNodo;
	int a;
	list_t *ptr = *head;

	for (a = 0; str[a]; a++)
	{}
	endNodo = malloc(sizeof(list_t));
	if (!endNodo)
	{
		return (NULL);
	}
	endNodo->str = strdup(str);
	endNodo->len = a;
	endNodo->next = NULL;
	/**ptr->next = endNodo;*/
	if (*head == NULL)
	{
		*head = endNodo;
		return (endNodo);
	}
	if (ptr)
	{
		for (; ptr->next; ptr = ptr->next)
		{}
	}
	ptr->next = endNodo;

	return (endNodo);
}
