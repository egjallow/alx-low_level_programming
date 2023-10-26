#include "main.h"

int is_prime(int a, int b);

/**
 * is_prime_number - checks if int is a prime number
 *
 * @n: int to prime to check if it
 * Return: int 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (is_prime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * is_prime - checks if prime
 *
 * @a: divisibility
 * @b: multiple of a
 * Return: the int
 */
int is_prime(int a, int b)
{
	if (a == 1)
		return (0);
	if (b == 1)
		return (1);
	if (a % b == 0)
		return (0);
	else
		return (is_prime(a, b - 1));
}
