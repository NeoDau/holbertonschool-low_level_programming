#include "main.h"
#include <ctype.h>
/**
 *cap_string - function
 *@cap: value char
 *Return: cap
 */

char *cap_string(char *cap)
{
	int a;

	for (a = 0; cap[a] != '\0'; a++)
	{
		if (cap[a] == 32 || cap[a] == 44 || cap[a] == 59 ||
			cap[a] == 46 || cap[a] == 33 || cap[a] == 63 ||
			cap[a] == 92 || cap[a] == 40 || cap[a] == 41 ||
			cap[a] == 123 || cap[a] == 125)
		{
			cap[a + 1] = toupper(cap[a] + 1) - 32;
		}
	}
	return (cap);
}
