#include "main.h"
/**
 * _strchr - Locates character in a string
 *@s: source string
 *@c: character to search for
 *
 * Return: null
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (char *)s;
}
s++;
}
if (c == '\0')
{
return (char *)s;
}
return (0);
}
