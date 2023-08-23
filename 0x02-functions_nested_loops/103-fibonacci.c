#include <stdio.h>
/**
 * main - entry point of thr program
 * Description: the sum of the even num in fibonacci < 4mil
 * Return: Always return 0
 */

int main(void)
{
	unsigned long count, i, j, k, sums;

	j = 1;
	i = sums = 0;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
