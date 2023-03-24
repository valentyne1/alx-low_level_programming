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
int f;
for (f = 0; f <= 9; f++)
{
if (f != 2 && f != 4)
{
_putchar(f);
}
}
_putchar('\n');
}
