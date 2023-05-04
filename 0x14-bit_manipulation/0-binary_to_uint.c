#include "main.h"

/**
 * binary_to_unit - converts a binary to an unsigned integer
 * @b: pointer to string of binary 0 and 1.
 * Return: converted number or 0 if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
	return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
	return (0);
num = num << 1;
if (*b == '1')
	num = num | 1;
b++;
}
return (num);
}
