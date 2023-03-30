#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function to reverse an array
 * @a: an array of integers
 * @n: number of elements in an array
 */
void reverse_array(int *a, int n)
{
int d;
int s;
int temp;

for (d = 0, s = n - 1; d < s; d++, s--)
{
temp = a[d];
a[d] = a[s];
a[s] = temp;
}
}
