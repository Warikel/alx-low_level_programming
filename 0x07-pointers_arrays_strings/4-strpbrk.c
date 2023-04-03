#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: source of string
 * @accept: accepted characters
 *
 * return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
char *p = s;
while (*p != '\0')
{
char *q = accept;
while (*q != '\0')
{
if (*p == *q)
{
return (q);
}
q++;
}
p++
}
return ('\0');
}
