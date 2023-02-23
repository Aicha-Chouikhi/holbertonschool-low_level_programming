#include <stdio.h>
#include "main.h"

/**
* print_last_digit - is a function that prints the last digit of a number *
* @n: number input
* Return: value of the last digit
*/
int print_last_digit(int n)
{
  int j = n % 10;

  if (j < 0)
    j = j * -1;
_putchar(j + '0');

 return (j);
}
