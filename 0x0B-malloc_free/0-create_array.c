#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: sizde of memory to print
 * @c: char value
 * Description:create array of size 'size' and assign cgar c
 * Return: array pointer or Null.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	str[i] = c;
return (str);
}
