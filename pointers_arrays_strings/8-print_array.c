#include "main.h"
#include <stdio.h>

/**
* print_array - Prints an inputted numbers of an array
* @a: array
* @n: The number of elements
* Return: always 0
*/
void print_array(int *a, int n)

{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
