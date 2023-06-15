#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: function int parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check != NULL)
	{
		return (check);
	}
	exit(98);
}
