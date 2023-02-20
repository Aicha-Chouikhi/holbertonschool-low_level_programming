#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* print whether the number stored in the variable n is positive or negative *
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastDigit = n % 10;

if (lastDigit > 5)
printf("Last digit of %d is ", n "and is greater than 5\n");
else if (lastDigit == 0)
printf("Last digit of %d is ", n "and is 0\n");
else
printf("Last digit of %d is ", n "and is less than 6 and not 0\n");

return 0;
}
