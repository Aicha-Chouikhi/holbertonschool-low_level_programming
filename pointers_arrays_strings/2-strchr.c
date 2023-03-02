#include "main.h"

/**
 * _strchr - is a function that locates a character in a string
 * @s: input
 * @c: input
 * Return:string
 */
char *_strchr(char *s, char c)
{
int j;

for (j = 0; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (s + j);
}
return (NULL);
}
