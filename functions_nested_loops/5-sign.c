#include "main.h"

/**
* prints_the_sign_of_a_number
*
* Return: always (Success)
*/
int print_sign(int n)
{
if (n > 0)
printf("+");
return 1;
else if (n < 0)
printf("-");
return -1;
else
printf("0");
return 0;
}
