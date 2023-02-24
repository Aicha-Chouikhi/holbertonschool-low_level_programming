#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line of _ n long
 * @n: length of line
 * Return: void
 */

void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
putchar('_');
}
putchar('\n');
}
