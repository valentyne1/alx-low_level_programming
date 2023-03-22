#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char v;
int j = 1;

while (j <= 10)
{
for (v = 'a'; v <= 'z'; v++)
{
_putchar(v);
}
_putchar('\n');
j++;
}
}
