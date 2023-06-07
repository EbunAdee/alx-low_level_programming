#include "main.h"
/* DECRIPTION: A function that prints a reverse of a string.
 *
 */

void _print_rev_recursion(char *s);
{
	if (*s == '0')
	{
		return;
	}
	_print_rev_recursion (s + 1);
	_putchar (*s);
}
