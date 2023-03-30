#include <stdio.h>
#include "main.h"
/**
 * leet - main entry
 * @str: string
 * Return: returns the string
 */
char *leet(char *str)
{
int i;
char c;

for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
if (c == 'a' || c == 'A')
{
str[i] = '4';
}
else if (c == 'e' || c == 'E')
{
str[i] = '3';
}
else if (c == 'o' || c == 'O')
{
str[i] = '0';
}
else if (c == 't' || c == 'T')
{
str[i] = '7';
}
else if (c == 'l' || c == 'L')
{
str[i] = '1';
}
}
return (str);
}
