#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
