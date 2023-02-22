#include <stdio.h>
#include "main.h"

/**
* function that checks for alphabetic character
*
* Return: void
*/
int _isalpha(int c);

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return 1;
else
return 0;
}
