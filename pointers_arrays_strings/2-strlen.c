
#include "main.h"

/**
* _strlen - is a function that returns the length of a string
* @s: input
* Return: Always 0.
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
