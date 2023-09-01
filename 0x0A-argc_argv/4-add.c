#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: total number of arguments
 * @argv: array of strings representing arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;

			while (argv[i][j])
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}

