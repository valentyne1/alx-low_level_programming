#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
	_putchar(v);
	}
	_putchar('\n');
}
