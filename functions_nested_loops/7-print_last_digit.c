#include <stdio.h>
#include "main.h"

/**
* print_last_digit - is a function that prints the last digit of a number *
* @n: number input
* Return: value of the last digit
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{		    
  n = n * (-1)
}
 _putchar(n + '0');
}
