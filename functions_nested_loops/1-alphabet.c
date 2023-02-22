#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* print_alphabet *
*
* Return: Always 0 (Success)
*/
int print_alphabet(void)
{
char alph = 'a';

while (alph <= 'z')
{
_putchar(alph);
alph++;
}

_putchar('\n');
}

