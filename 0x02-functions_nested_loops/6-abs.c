#include "main.h"
/**
 * _abs - check for absolute value.
 * @j:  any given value.
 * Return: always a
 */
int _abs(int j)
{
if (j < 0)
	j = -(j);
else if (j >= 0)
	j = j;
return (j);
}
