#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - function to change string to upper
 * @string: string to be changed
 * Return: Always the string
 */
char *string_toupper(char *string)
{
int len = strlen(string);
int i;

for (i = 0; i < len; i++)
{
if (islower(string[i]))
{
string[i] = toupper(string[i]);
}
}
return (string);
}

