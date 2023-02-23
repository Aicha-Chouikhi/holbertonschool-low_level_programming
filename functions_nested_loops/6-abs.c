#include <stdio.h>
#include "main.h"

/**
* _abs - a function that computes the absolute value of an integer
* @n: integer input
* Return: absolute value of n
*/
int _abs(int n)

{
int r = 0;
if (n < 0)
{
r = n * -1;
return (r);
}
else
{
return (n);
}
}

