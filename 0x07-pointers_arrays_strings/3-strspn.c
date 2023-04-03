#include <stdio.h>
#include "main.h"
/**
 * _strspn - function
 * @s: string
 * @accept: number of bytes
 * Return: Always s
 */
unsigned _strspn(char *s, char *accept)
{
	 unsigned int k;
	 unsigned int v;
	 unsigned int value;
	 unsigned int check;

	 for (k = 0; s[k] != '\0'; k++)
	 {
		 check = 0;

		 for (v = 0; accept[v] != '\0'; v++)
		 {
			 if (accept[v] == s[k])
			 {
				 value++;
				 check = 1;
			 }
			 if (check == 0)
			 {
				 value --;
			 }
		 }
	 }
	  return (accept[v]);
}
