#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* print the alphabet in lowercase *
*
* Return: Always 0 (Success)
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

