#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonals of a square matrix
 * @a: th matrix
 * @size: the size
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size * size; i += size + 1)
{
sum1 += *(a + i);
}
for (i = size - 1; i < size * size - 1; i += size - 1)
{
sum2 += *(a + i);
}
 printf("%d, %d\n",sum1, sum2);
}
