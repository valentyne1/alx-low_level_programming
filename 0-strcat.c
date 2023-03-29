#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcat - function to concatenate strings
 * @dest: the destination string
 * @src: the source string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int l1;
	int l2;
	int j;

	l1 = strlen(dest);/**To determine the string length for dest string */
	l2 = strlen(src);/**To determine the string length for src string */

	for (j = 0; j <= l2; j++)
	{
		dest[l1 + j] = src[j];
	}
	/**printf("%s", dest);
	printf("\n"); */
	return (dest);
}
