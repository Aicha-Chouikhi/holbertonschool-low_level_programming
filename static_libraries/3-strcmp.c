#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input
 * @s2: input
 * Return: (0)
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
i++;
if ((s1[i] - s2[i]) != 0)
return (s1[i] - s2[i]);
}
return (0);
}
