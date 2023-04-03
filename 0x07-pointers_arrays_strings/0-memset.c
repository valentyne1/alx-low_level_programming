#include "main.h"
#include <string.h>
/**
 * _memset - function
 * @s: string
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
		s[v] = b;
	return (s);
}
