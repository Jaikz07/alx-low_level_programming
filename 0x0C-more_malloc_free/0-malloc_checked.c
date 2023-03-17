#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that cause normal process termination
 *  with a status value of 98
 *  @b: integer value
 *  Return: always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
