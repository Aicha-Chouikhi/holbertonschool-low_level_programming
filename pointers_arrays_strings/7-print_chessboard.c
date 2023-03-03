#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a[8]: input array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}
