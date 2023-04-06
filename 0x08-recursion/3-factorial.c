#include "main.h"
/**
 * factorial - calculate a factorial of a number
 * @n: the number to calculate
 *
 * Return: integer value
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
