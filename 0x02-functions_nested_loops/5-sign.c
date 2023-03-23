#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: checks number
 *
 * Return: 1 , 0 , -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
