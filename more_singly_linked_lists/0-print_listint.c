#include "lists.h"
/**
 *print_listint - function print all the elements
 *@h: elements
 *Return: all elements
 */
size_t print_listint(const listint_t *h)
{

	size_t a = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		a++;
	}
	return (a);
}
