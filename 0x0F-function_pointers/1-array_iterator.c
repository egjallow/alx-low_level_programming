#include "function_pointers.h"
/**
 * array_iterator - function pointer
 * @array: takes in the array
 * @size: size of the array
 * @action: takes in the action pointer
 * Returns: nothing but prints number of elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
