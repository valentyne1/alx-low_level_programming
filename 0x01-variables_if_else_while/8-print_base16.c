#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int f;
char k;

for (f = 48; f < 58; f++)
putchar(f);

for (k = 'a'; k <= 'f'; k++)
putchar(k);

putchar('\n');

return (0);
}
