#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main - A test c file
* positive_or_negative - Entry point
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

if (i > 0)
{
printf("%d is positive\n", i);
}

else if (i == 0)
{
printf("%d is zero\n", i);
}

else if (i < 0)
{
printf("%d is negative\n", i);
}
}
