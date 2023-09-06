#include "main.h"
/**
 *cap_string - capitalizes first words of a string.
 *@s: pointer of a string
 * Return: return s.
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int sp = 13;
	char pun[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < sp)
		{
			if ((a == 0 || s[a - 1] == pun[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
