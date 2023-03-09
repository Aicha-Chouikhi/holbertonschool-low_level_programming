#include "main.h"

/**
* _strcpy - function that copies a string
* @dest: copy to
* @src: copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)
{

int i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
