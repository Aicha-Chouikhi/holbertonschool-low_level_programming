#include <stdio.h>
#include "main.h"

/**
 * print_square - is a function that prints a square
 * @size: size of the square
 * Return: 0 if size <= 0, square if size > 0
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
