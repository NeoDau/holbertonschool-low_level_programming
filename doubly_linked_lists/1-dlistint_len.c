#include "lists.h"
/**
 *dlistint_len - function that return the number of elements
 *@h: list of elements
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	const dlistint_t *ptr = h;

	for (; ptr; ptr = ptr->next)
	{
		a++;
	}
	return (a);
}
