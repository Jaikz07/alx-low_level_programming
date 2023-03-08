#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
	return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns length of a string
 * @s: string value
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the character recursively for palindrome
 * @s: string value
 * @i: iterator
 * @len: string length
 * Return: 1 for palindrome else 0
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
	return (0);
if (i >= len)
	return (1);
return (check_pal(s, i + 1, len - 1));
}
