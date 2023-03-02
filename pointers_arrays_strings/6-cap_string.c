#include "main.h"

/**
 * cap_string - Function that capitalizes all words 
 * @str: input string
 * Return: first letter of each word caps
 */

char *string_toupper(char *str)
{
int x = 0;

while (str[x])
{
if (str[x] >= 'a' && str[x] <= 'z')
str[x] -= 32;

x++;
}

return (str);
}



