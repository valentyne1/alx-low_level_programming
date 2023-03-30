#include <ctype.h>
#include <stdio.h>
#include"main.h"
/**
 * cap_string - Entry point
 * @str: String
 * Return: The string
 */
#include <ctype.h>

char *cap_string(char *str)
{
int i = 0;

/**Capitalize the first letter of the string*/
if (str[i] != '\0')
{
str[i] = toupper(str[i]);
}
 /**Loop through the string and capitalize the first letter of each word*/
while (str[i] != '\0')
{/**Check for word separators*/
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
while (isspace(str[i]))
{
i++;
}
if (str[i] != '\0')
{
str[i] = toupper(str[i]);
}
}
i++;
}
return (str);
}
