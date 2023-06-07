#include "main.h"

/**
 * _strlen_recursion - checks length of a string
 * @s: Strint to check
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	
	return (1 + _strlen_recursion(s + 1));
}
