#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root
 * @n: number to be returned
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates the square root
 * @i: iterate number
 * @n: number to return
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == 1)
return (i);
return (_sqrt(n, i + 1));
}
