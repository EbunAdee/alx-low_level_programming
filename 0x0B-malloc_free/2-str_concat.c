#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, m, n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	concat = malloc((i + j + 1) * sizeof(char));

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (m = 0; s1[m] != '\0'; m++)
	{
		concat[m] = s1[m];
	}
	for (n = 0; n < j; n++)
	{
		concat[m + n] = s2[n];
	}
	concat[m + n] = '\0';
	return (concat);
}
