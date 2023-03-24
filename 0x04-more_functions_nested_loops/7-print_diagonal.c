#include "main.h"

/**
 * print_diagnol - prints diagnol
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagnol(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
