#include <stdio.h>

/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch, n;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
