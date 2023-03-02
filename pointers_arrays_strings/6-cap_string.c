#include "main.h"

/**
 * cap_string - Function that capitalizes all words 
 * @str: input string
 * Return: first letter of each word caps
 */

char *string_toupper(char *str)
{
int i, x;
int cap = 32;
int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - cap;
}

cap = 0;

for (x = 0; x <= 12; x++)
{
if (n[i] == separators[x])
{
x = 12;
cap = 32;
}
}
}
return (n);
}



