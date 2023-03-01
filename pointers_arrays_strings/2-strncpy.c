#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: number input
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for ( ; j < n; i++)
{
dest[i] = '\0';
}
return dest;
}
