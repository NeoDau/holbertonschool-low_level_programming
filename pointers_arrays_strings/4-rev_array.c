#include "main.h"
/**
 *reverse_array - function reverse
 *@a: int
 *@n: int
 */
void reverse_array(int *a, int n)
{
	int acs;
	int b;

	for (acs = 0; acs < n / 2; acs++)
	{
		b = a[acs];
		a[acs] = a[n - acs - 1];
		a[n - acs - 1] = b;
	}
}
