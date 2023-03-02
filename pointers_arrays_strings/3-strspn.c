#include "main.h"

/**
 * _strspn - is function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept);
{
unsigned int i, j;
unsigned int n = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
{
return (n);
}
}
return (n);
}
