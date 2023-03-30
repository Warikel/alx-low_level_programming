#include "main.h"
/**
  * leet - Encodes a string into 1337
  * @str: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *str)
{
char *leetStr = str;
int i, j;

for (i = 0; leetStr[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (leetStr[i] == "aeotlAEOTL"[j])
{
leetStr[i] = "43071"[j];
break;
}
}
}
return (leetStr);
}
