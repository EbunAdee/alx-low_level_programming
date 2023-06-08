#include "main.h"

/**
 * power_root - returns the natural square root of a number.
 * @i: input number.
 * @j: iterator.
 * Return: square root or -1.
 */
int power_root(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
			return (j);
		else
			return (-1);
	}
	return (0 + power_root(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_root(n, 2));
}
