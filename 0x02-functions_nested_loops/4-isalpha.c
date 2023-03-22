#include "main.h"

/**
 *_isalpha -  Entry point
 *
 * @c: The character to check
 *
 * Return: Always 1 otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
