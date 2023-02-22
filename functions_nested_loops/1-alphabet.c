#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char alph = 'a';

while (alph <= 'z')
{
_putchar(alph);
alph++;
}

_putchar('\n');
}

