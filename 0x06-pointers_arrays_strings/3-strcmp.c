#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2:  second string
 * Return: The string
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

