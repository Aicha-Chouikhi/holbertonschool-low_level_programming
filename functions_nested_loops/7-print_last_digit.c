#include <stdio.h>
#include "main.h"

/**
* print_last_digit - is a function that prints the last digit of a number *
* @last_digit: number input
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
 printf("%d", last_digit);
}
