#include "main.h"
#include <stdlib.h>

/* 
 * create_array - creates an array of chars.
 * Returns: returns  NULL if size = 0
 * 	    A pointer to the array if sucessful
 * 	    NULL if it fails.
 * @size: size of the array.
 * @c: storaged char
 */

char *create_array(unsigned int size, char c)
{
	char arr;
	unsigned int j;

	if (size == 0)
	{
	return NULL;
	}

	char arr = (char*)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
	return NULL;
	}

	for (unsigned int j = 0; j < size; j++)
	{
		arr[j] = c;
	}
	return arr;
}
