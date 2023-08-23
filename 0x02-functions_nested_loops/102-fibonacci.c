#include <stdio.h>
/**
 * main - entry point of the programm
 * Description: prints the first 50 fibonacci num
 * Return: 0
 */

int main(void)
{
	int i;
	long j, k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
