#include <stdio.h>
#include "main.h"

/**
* prints_the_sign_of_a_number
*
* Return: always (Success)
*/
int print_sign(int n)
{
if (n > 0)
  {
_putchar ('+');
  }
 return (1);
else if (n < 0)
  {
_putchar ('-');
  }
 return (-1);
 else
   {
_putchar (0);
   }
}
