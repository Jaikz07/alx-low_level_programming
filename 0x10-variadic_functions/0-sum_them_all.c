#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: variable count
 * @...: ellipsis (takes any variable)
 * Return: 0 if n == 0 else sum all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
