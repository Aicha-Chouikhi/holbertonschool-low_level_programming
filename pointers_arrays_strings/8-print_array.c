#include "main.h"

/**
* print_array - Prints an inputted number of an array
* @a: input array
* @n: The number of integers to be printed
* Return: always 0
*/

void print_array(int *a, int n)

{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
