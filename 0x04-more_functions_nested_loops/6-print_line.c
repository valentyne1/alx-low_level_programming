#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: number of times
 *
 */
void print_line(int n)
{
	char c = '_';

	if
		(n  <= 0)
	{
		_putchar('\n');
	}
	else if
		(n > 0 &&  n++)
		{
		_putchar(c++);
		}
}
