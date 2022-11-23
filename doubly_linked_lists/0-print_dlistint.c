#include "lists.h"
/**
 *print_dlistint - function all the print element list
 *@h: pointer to the head of te list
 *Return: the number of nodo
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *ptr;

	ptr = h;

	for (; ptr; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		a++;
	}
	return (a);
}
