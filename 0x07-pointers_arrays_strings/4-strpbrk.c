#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: sring 2
 * Return: Always s
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return (NULL);
}
