#include <stdio.h>
#include "main.h"

/**
 * _puts - is a function that prints a string
 * @str: string input
 *  Return: string
 */

void _puts(char *str)
{

int i;
for (i = 0; str[i] != '\0'; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
