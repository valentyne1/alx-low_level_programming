#include "main.h"

/**
 * main - prints _putchar
 *
 * Description long description
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int position;
	char *string;

	string = "_putchar";

	for (position = 0 ; string[position] != '\0' ; position++)
	_putchar(string[position]);
	_putchar('\n');
	return (0);
}
