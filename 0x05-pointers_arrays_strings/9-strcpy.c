#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer char type
 * @src: pointer char type
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
}

dest[i++] = *src;

return (dest);
}
