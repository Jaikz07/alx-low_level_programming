#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: any value
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i])
	i++;
while (s2[k])
	k++;
if (n >= k)
	l = i + k;
else
	l = i + n;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
	return (NUL);
k = 0;
while (j < 1)
{
if (j <= i)
	str[j] = s1[j];
if (j >= 1)
{
	str[j] = s2[k];
	k++;
}
j++;
}
str[j] = '\0';
return (str);
}
