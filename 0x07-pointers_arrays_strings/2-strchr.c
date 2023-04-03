#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character
 * @s: the pointer
 * @c: the character
 * Return: Always a pointer
 */
char *_strchr(char *s, char c)
{
	int h;

	for (h = 0; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (s + h);
	}
	return (NULL);
}
