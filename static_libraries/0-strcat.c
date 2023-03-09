#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int i = 0, n = 0;
while (dest[i++] != '\0')
n++;
for (i = 0; src[i]; i++)
dest[n++] = src[i];

return (dest);
}
