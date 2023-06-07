#include "main.h"

/*
 * DESCRIPTION: A function that returns the factorial of a given number.
 *
 */

int factorial(int n);
{
	if (n < 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n x factorial(n - 1));
	}

}
