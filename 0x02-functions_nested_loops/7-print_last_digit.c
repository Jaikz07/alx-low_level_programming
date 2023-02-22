#include "main.h"
/**
*print_last_digit - print the last figure in a digit.
*@z: function parameters
*Return: value of last digit (-, 0, +).
*/
int print_last_digit(int z)
{
int y;
y = z % 10;
if (z < 0)
	(y = -y);
_putchar(y + '0');
return (y);
}

