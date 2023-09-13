#include "function_pointers.h"
/**
 * print_name - is the name of the function
 * @name: the name in char
 * @f: the function pointer
 * @*f: the function pointer
 * Returns: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
