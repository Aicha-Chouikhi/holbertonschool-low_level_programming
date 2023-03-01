#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: concat string
 */

char *_strcat(char *dest, char *src)
{

int i, n;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
{
}
return (dest);
}
