#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endiann - 0.
 *         If little-endiann - 1.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endiann = (char *)&numb;

	if (*endiann == 1)
		return (1);

	return (0);
}
