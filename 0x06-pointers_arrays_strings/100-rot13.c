#include "main.h"

/**
 * rot13 - Entry point
 * @str: string
 * Return: Always a string
 */
char *rot13(char *str)
{
char *result = str;
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
for (j = 0; j < 13; j++)
{
str[i]++;
if (str[i] > 'z')
{
str[i] = 'a';
}
}
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
for (j = 0; j < 13; j++)
{
str[i]++;
if (str[i] > 'Z')
{
str[i] = 'A';
}
}
}
}
return (result);
}
