#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
while (*p != 0)
{
++p;
}
while (*src != '\0' && n > 0)
{
*p++ = *src++;
--n;
}
*p = '\0';
return (dest);
}
