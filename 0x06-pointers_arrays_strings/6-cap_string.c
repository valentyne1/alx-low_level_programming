#include <ctype.h>
#include"main.h"
/**
 * cap_string - Entry point
 * @str: String
 * Return: The string
 */
char *cap_string(char *str)
{
int i;
int capitalize_next;

capitalize_next = 1;/** start by capitalizing the first letter*/
for (i = 0; str[i] != '\0'; i++)
{/** capitalize the next letter if necessary*/
if (capitalize_next && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize_next = 0;
} /** check for word separators*/
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' ||
str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
}
return (str);
}
