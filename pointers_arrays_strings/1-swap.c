#include "main.h"

/**
* swap_int - that swaps the values of two integers
* @a: input
* @b: input
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
