#include <stdio.h>
#include "main.h"

/**
* print_alphabet -print alphabet
*
* Return: void
*/
void print_alphabet_x10(void)
{
  int i;
  char alph;
  for (i = 0; i < 10; i++)
    for (alph = a; alph <= z; alph++)
      putchar(alph);

putchar('\n');
}
