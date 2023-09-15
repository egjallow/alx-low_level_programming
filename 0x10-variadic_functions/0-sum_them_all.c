#include "variadic_functions.h"
/**
 * sum_them_all - sum them all the numbers
 * @n: takes in int
 * Return: the sum of thr list
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_list, int);
	}
	va_end(my_list);
	return (sum);
}
