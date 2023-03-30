#include "main.h"
/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
char *dst = dest;
while (n-- > 0 && *src != '\0')
{
*dst++ = *src++;
}
while (n-- > 0)
{
*dst++ = '\0';
}
return (dest);
}
