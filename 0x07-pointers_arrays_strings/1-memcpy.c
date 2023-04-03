#include "main.h"
/**
 * _memcpy - memory to be copied
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *d = dest;
char *s = src;

for (i = 0; i < n; i++)
{
d[i] = s[i]
}
return (dest);
}
