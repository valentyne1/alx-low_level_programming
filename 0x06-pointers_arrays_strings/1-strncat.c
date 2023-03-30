#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function to concatenate n bytes
 * @dest: First string
 * @src: Second string
 * @n: the number of bytes
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
 /** Move dest_ptr to the end of dest string*/
while (*dest_ptr != '\0')
{
dest_ptr++;
}
/** Append src string to dest string*/
while (n-- && *src != '\0')
{
*dest_ptr++ = *src++;
}
/** Add null terminator to dest string*/
*dest_ptr = '\0';
return (dest);
}
