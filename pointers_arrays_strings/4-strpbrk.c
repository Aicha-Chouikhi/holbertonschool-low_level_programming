#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int j, n;

for (j = 0; s[j] != '\0'; j++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if ([j] == accept[n])
return (s + j);
}
}

return (NULL);
}
