#include <stdio.h>
/**
* main - Entry point
*
* print the alphabet in lowercase *
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
putchar(alph);
alph++;

putchar('\n');
}

int main(void)
{
print_alphabet(void);
return (0);

}
