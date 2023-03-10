#include "main.h"
/**
 * _islower - checks code for lower cases.
 * @c: is indicator of lowercase.
 * Return: returns 1 if c is lowercase else 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
_putchar('\n');
}
