#include <stdio.h>
/**
 * main - This is a programm that prints alphabets in lower case using putchar
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
