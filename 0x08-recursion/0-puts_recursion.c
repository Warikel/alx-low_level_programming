#include "main.h"
/**
 * _puts_recursion - prints a string
 * @c: the character to print
 *
 * Return: 0
 */
void _putchar(char c);
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
