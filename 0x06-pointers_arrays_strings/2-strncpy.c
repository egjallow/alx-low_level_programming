#include "main.h"
/**
 * _strncpy - Is a string that concat
 * @dest: Teake in pointer of dest
 * @src: Takes in src pointer
 * @n: takes in int as an arg
 * Return: it returns a pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i;

   for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

   return dest;
}