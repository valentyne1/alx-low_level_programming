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
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
