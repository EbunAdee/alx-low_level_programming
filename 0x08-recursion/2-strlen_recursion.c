#include "main.h"

/* DESCRIPTION: A functionthat returns the length of a string.
 *
 */

int _strlen_recursion(char *s);
{
	if(*s == 0)
	{
		return;
	}
	else
	{	
		return 1 + __strlen_recursion(s + 1);
	}

}
