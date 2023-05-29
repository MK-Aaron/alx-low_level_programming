#include <stdio.h>
#include "main.h"

/**
 * rev_string - rev a string
 * @s: str to rev
 * Return: null
 */

void rev_string(char *s)
{
	int len, i, j;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	len = len - 1;
	j = len;
	while (i <= len / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
		i++;
	}
}
