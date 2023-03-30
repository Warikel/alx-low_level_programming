#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @str: ...
  *
  * Return: char value
  */
char *cap_string(char *str)
{
int i = 0;
int should_capitalize = 1;

while (str[i] != '\0')
{
if (should_capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

should_capitalize = 0;

switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
should_capitalize = 1;
break;
default:
break;
}

i++;
}
return (str);
}
