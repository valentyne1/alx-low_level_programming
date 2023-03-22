#include "main.h"

/**
 *_islower(): Entry point
 *
 * Description: prints lowercase
 *(int c): parameter
 * Return: Always 1 (lowercase) else 0
 */

int _islower(int c)
{
if (c >= 97 &&c <= 122)
{
return (1);
}
return (0);
}
