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
	int j;
	char c;

	j = s[0];
	c = *s;

	if (j == 0 && j >= 9)
	{
		for(c = j; c != '\0'; c++)
		{
	printf("%d", j);
	}
	}
	else
	{
		printf("0");
		printf("\n");
	}
	return (0);
}
