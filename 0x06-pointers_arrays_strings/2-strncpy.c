#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - function to copy strings
 * @dest: first string
 * @src: second string
 * @n: characters
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (i < n && src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  while (i < n) {
    dest[i] = '\0';
    i++;
  }
  return dest;
}

