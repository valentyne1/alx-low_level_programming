#include "main.h"
/**
 * _puts - Entry point
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
