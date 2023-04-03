#include "main.h"
#include <stdio.h>
/**
 * _memset - fill memory with a constant byte
 * @s: pointer that stores an address
 * @b: constant byte used for filling
 * @n: number of bytes to be filled by n
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
