#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: totall value of argv
 * @argv: is a array of string
 * Return: it return an int ant prints every
 * thing in argv array
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
