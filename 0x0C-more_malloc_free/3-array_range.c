#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *range, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	range = malloc(size * sizeof(*range));

	if (range == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		range[i] = min + i;
	}
	return (range);
}
