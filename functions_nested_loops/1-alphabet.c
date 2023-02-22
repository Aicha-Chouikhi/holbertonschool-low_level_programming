#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* print the alphabet in lowercase *
*
* Return: Always 0 (Success)
*/
int print_alphabet(void)
{
char alph;
for(alph = 'a'; alph <= 'z' ; alph++)
_putchar(alph);

_putchar('\n');
}

