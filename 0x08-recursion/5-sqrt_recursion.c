#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be returned
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else
{
int nsqr = n / 2;
int new_nsqr = (nsqr + n / nsqr) / 2;
while (new_nsqr < nsqr)
{
nsqr = new_nsqr;
new_nsqr = (nsqr + n / nsqr) / 2;
}
if (new_nsqr *new_nsqr == n)
{
return (new_nsqr);
}
else
{
return (-1);
}
}
}
