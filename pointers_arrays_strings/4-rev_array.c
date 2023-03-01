#include "main.h"

/**
 * reverse_array - a function that reverses the  an array of integers
 * @a: content
 * @n: elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, x;

for (i = 0; i < n; i++)
{
n--;
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
