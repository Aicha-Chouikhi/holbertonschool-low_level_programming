#include <stdio.h>
#include "main.h"

/**
 * _strstr - is a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0' && haystack[i+j] == needle[j])
{
j++;
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
}
