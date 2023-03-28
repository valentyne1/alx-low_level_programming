#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int g = 0;
	while (s[g] != '\0')
	{
		g++;
	}
	for (g -= 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
