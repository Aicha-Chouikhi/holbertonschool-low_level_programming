#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* print the alphabet in lowercase *
*
* Return: Always 0 (Success)
*/
int print_alphabet(void)
{
char alph;
for(alph = 'a'; alph <= 'z', alph++)
putchar(alph);

putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);

}
