#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Returns 1 is the input integer is a prime number
 * @n: integer number to be used
 *
 * Return: integer value
 */
int check_prime_number(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
if (n % 2 == 0 || n % 3 == 0)
return (0);
return (check_prime_number(n, 5));
}
/**
 * check_prime_number - check if number is prime
 * @n: number to be used
 * @i: iteration times
 *
 * Return: return 1 for prime otherwise return 0
 */
int check_prime_number(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime_number(n, i + 2));
}
