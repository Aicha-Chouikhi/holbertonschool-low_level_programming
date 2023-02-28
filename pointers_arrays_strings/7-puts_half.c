#include "main.h"

/**
 * puts_half - print  half of a string
 * @str: string input
 * Return: always 0
 */

void puts_half(char *str)

{

int i = 0;
int n = 0;
while (str[i] != '\0')
{
i++;
}
n = i / 2;
if (i % 2 == 1)
n++;
while (str[n] != '\0')
{
putchar(str[n]);
n++;
}
putchar('\n');
}
