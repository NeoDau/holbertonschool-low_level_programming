#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
	{
		/**
		*char
		*int
		*long int
		*long long int
		*float
		*/

		printf("Size of a %lu Byte(s)\n" sizeof(char));
		printf("Size of a %lu Byte(s)\n" sizeof(int));
		printf("Size of a %lu Byte(s)\n" sizeof(long int));
		printf("Size of a %lu Byte(s)\n" sizeof(long long int));
		printf("Size of a %lu Byte(s)\n" sizeof(float));
		return (0);
	}
