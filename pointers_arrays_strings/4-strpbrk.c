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

for (; *s != '\0'; s++)
{
for (char* a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
return (s);
}
}
}
return (NULL);
}
