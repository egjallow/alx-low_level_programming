#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: totall value of argv
 * @argv: is a array of string
 * Return: it return an int
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if(argc > 1)
		printf("%d\n", (argc -1));
	else
		printf("%d\n", 0);
	return (0);
}
