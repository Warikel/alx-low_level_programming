#include "main.h"
/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical otherwise return 0
 * @s1: the normal string
 * @s2: special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp_h(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
return (wildcmp_h(s1, s2));
}
/**
 * wildcmp_h - compares two strings
 * @s1: the normal string
 * @s2: the normal string
 *
 * Return: 1 is identical, else 0
*/
int wildcmp_h(char *s1, char *s2)
{
if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*'))
{
return (1);
}
if (*s2 == '*')
{
return (wildcmp_h(s1 + 1, s2) || wildcmp_h(s1, s2 + 1));
}
if (*s1 == *s2 || *2 == '?')
{
return (wildcmp_h(s1 + 1, s2 + 1));
}
return (0);
}
