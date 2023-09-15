#include "variadic_functions.h"
/**
 * print_strings - print some strings
 * @seperator: spaces
 * @n: an int number
 *
 * Return: returns 0
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *string;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(my_list, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (seperator != NULL && i < (n - 1))
		{
			printf("%s", seperator);
		}
	}
	va_end(my_list);
	printf("\n");
}
