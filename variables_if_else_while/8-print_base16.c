#include <stdio.h>
/**
* main - Entry point
*
* print the base of 16 *
*
* Return: Always 0 (Success)
*/
int main(void)
{
char x;
for(x='0'; x<='9'; x++)
putchar(x);

for(x='a'; x<='f'; x++)
putchar(x);

putchar('\n');
return (0);
}
