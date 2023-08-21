#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
