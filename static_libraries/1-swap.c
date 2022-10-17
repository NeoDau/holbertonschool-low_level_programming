#include "main.h"
/**
 *swap_int - value de function
 *@a: parametr
 *@b: parametr
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
