#include <stdio.h>
#include "main.h"

/**
* print_alphabet_X10 - a_function_that_prints_10_times_the_alphabet *
* @n: number input
* Return: x10 a-z
*/
void print_alphabet_x10(void)
{
int i, n;
i = 0;
while (i < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
i++;
_putchar('\n');
}
}
