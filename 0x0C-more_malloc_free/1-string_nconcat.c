#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: concatenating string
 * @n: number of bytes to concatenate
 * Return: s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, j, len1, len2;
	char *ptr;

	len1 = len2 = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2 || n == 0)
		n = len2;

	ptr = malloc(sizeof(*ptr) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	k = j = 0;

	for (i = 0; i < (len1 + n); i++)
	{
		if (s1[j] != '\0')
		{
			ptr[i] = s1[j];
			j++;
		}
		else
		{
			ptr[i] = s2[k];
			k++;
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
