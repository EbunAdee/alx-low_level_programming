#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */


char *_strdup(char *str)
{
	char *dupli;
	int m, n;

    if (str == NULL) 
    {
	return (NULL);
    }

    for (m = 0; str[m] != '\0'; m++)
    {
	dupli = malloc((m + 1) * sizeof(char));
    }

    if (dupli == NULL)
    {
        return (NULL);
    }
    
    for (n = 0; n <= m; n++)
    {
	dupli[n] = str[n];
    }
    return (dupli);
}
