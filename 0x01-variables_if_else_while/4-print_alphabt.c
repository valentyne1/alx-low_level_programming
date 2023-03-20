#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char g;

for (g = 'a'; g <= 'z'; g++)
{
if (g != 'q' && g != 'e')
putchar(g);
}

putchar('\n');

return (0);
}
