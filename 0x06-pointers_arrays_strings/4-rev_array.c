#include "main.h"
/**
 * reverse_array - Reverse the string in array
 * @a: Teake in pointer of dest
 * @n: Takes in src pointer
 * Return: it returns a reversed array element
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int rev;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
	}
}
