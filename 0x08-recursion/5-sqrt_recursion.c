#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: entry number.
 * @e: the iterator.
 * Return: the square root or -1.
 */

int power_operation(int n, int e)
{
	if (e % (n / e) == 0)
	{
		if (e * (n / e) == n)
			return (e);
		else
			return (-1);
	}
	return (0 + power_operation(n, e + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: entry number
 * Return: thenatural square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
