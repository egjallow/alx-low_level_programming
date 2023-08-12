#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n, m, o, p;

o = 48;
for (n = o; n <= 57; n++)
{
	for (m = n + 1; m <= 57; m++)
	{
		for (p = m + 1; p <= 57; p++)
		{
			if (m != p)
			{
				putchar(n);
				putchar(m);
				putchar(p);
			if (!(p == 57 && m == 56 && n == 55))
			{
			putchar(44);
			putchar(32);
			}
			}
		}
	}
}
putchar(10);
return (0);
}

