0;10;1c#include <stdio.h>
#include "main.h"

/**
* print_last_digit - is a function that prints the last digit of a number *
* @n: number input
* Return: value of the last digit
*/
int print_last_digit(int n)
{
last_digit = n % 10;
if (last_digit < 0)
{		    
  last_digit = last_digit * (-1)
}
 _putchar(last_digit + '0');
 return (last_digit);
}
