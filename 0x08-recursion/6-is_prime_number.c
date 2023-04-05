#include "main.h"

/**
 * is_prime - it detects if an input number is a prime number.
 * @n: entry number.
 * @e: the iterator.
 * Return: return 1 if n is a prime number, 0 if n is not a prime number.
 */

int is_prime(unsigned int n, unsigned int e)
{
	if (n % e == 0)
	{
		if (n == e)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, e + 1));
}


/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: entry number
 * Return: return 1 if n is prime number, or 0 if it is not
 */

int is_prime_number(int n)
{

	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
