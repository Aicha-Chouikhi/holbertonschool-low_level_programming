#include "main.h"

/**
 * print_triangle - print the triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
int a, b, c;

if (size > 0)
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
c = (size - a) - 1;
if (b < c)
_putchar (32);
else
_putchar (35);
}
_putchar('\n');
}
else
{
_putchar ('\n');
}
}
