#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to join
 * @s2: string to join
 * @n: no
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len = 0, s2_len = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n > s2_len)
		n = s2_len;
	res = malloc(s1_len + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < s1_len + n; i++)
	{
		if (*s1)
		{
			res[i] = *s1;
			s1++;
		}
		else
		{
			res[i] = *s2;
			s2++;
		}
	}
	res[i] = '\0';
	return (res);
}
