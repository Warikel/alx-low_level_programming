#include "main.h"

/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 *Return: 10x a-z
 */
void print_alphabet_x10(void)
{
int l, co;

co  = 0;

while (co < 0)
{
for (l = 0; l < 26; l++)
{
_putchar('a' + l);
}
co++;
_putchar('\n');
}
}
