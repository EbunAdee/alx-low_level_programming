#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: function parameter
 * @size: function parameter
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	call = malloc(nmemb * size);
	if (call == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		call[nmemb] = 0;
	return ((void *)call);
}
