#include "main.h"
/**
 * _isalpha - checks for alphabet characters case incensitive.
 * Return: 1 if c is a letter, lowercase or uppercase else 0.
 * @c: is an alhphabet in upper and lower case.
 */
int _isalpha(int c)
{
if ((c <= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
else
	return (0);
}
