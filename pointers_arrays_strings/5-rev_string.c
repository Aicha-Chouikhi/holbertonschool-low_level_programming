#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{

char rev = s[0];
int j = 0;
int i;

while (s[j] != '\0')
j++;

for (i = 0; i < j; i++)
{
j--;
rev = s[i];
s[i] = s[j];
s[j] = rev;
}
}
