#include "main.h"
#include <string.h>

/**
 * _strlen - function to return string
 * @s: The string
 * Return: returns the size of the string
 */

int _strlen(char *s)
{
	int j= 0;

	while (*s != '\0')
	{
		j++;
		s++;
		return (j);
	}
}
