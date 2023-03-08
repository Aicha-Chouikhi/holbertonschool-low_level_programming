#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int j, ad = 0;
if (argc < 1)
return (0);
for (j = 1; j < argc; j++)
{
if (!atoi(argv[j]))
{
printf("%s\n", "Error");
return (1);
}
ad += atoi(argv[j]);
}
printf("%d\n", ad);

	return (0);
}
