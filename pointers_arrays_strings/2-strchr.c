#include "main.h"

/**
 * _strchr - is a function that locates a character in a string
 * @s: input
 * @c: input
 * Return:string
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
}

if (*s == '\0')
{
return (s);
}
return (NULL);
}
