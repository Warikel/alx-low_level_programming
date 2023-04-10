#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
int num1 = 0, num2 = 0;
if (argc != 3)
{
printf("error/n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d/n", num1 * num2);
return (0);
}
