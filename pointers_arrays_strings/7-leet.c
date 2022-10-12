#include "main.h"
/**
 *leet - function encodes a string
 *@n: value
 */

char *leet(char *n)
{
	int a;
	int b;
	char w[] = "a4A4e3E3o0O0t7T7l1L1";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; w[b] != '\0'; b++)
		{
			if (n[a] == w[b])
			{
				n[a] = w[b + 1];
				break;
			}
		}
	}
	return (n);
}
