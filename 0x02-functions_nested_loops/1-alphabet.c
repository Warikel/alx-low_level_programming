#include "holberton.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int l;

	for (l = 0; l < 26; l++)
	{
		_putchar('a' + l);
	}
	_putchar('\n');
}
