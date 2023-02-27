#include "main.h"
/**
 * swap_int - swaps the value of two integer.
 * @a: parameter.
 * @b: parameter.
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
