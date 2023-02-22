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
char alph = 'a';
while (alph <= 'z')
putchar(alph);
alph++;

putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);

}
