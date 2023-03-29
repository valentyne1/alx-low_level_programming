#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - entry point
 * @s: string
 * Return: Always 0
 */
int _atoi(char *s)
{
	int j = 1;
	int v = 0;

	if((s[v] != '\0' && ++v) && (s[v] != '\0' && --v))
	j = j * 10 + s[v] - '0';

	return j;
}
