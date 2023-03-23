#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Short description
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;
	void _putchar();

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
