#include "main.h"
/**
 * swap_int - swaps two integers
 *
 *@a: An integer to swap
 *@b: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
