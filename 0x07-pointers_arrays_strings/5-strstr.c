#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: the char value
 */
char *_strstr(char *haystack, char *needle)

{
if (!*needle)
{
return (haystack);
}
char *h = haystack;

while (*h)
{
char *n = needle;

while (*n && *h && *n == *h)
{
n++;
h++;
}
if (!*n)
{
return (h);
}
h++;
}
return ('\0');
}
