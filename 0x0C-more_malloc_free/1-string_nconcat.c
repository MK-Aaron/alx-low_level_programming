#include <stdlib.h>
#include <string.h>

/**
 * concatenates two strings - concatenates two strings
 * @s1: string to concatenate
 * @s2: concatenating string
 * @n: number of bytes to concatenate
 * Return: s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1= "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2 + 1;

	ptr = malloc(sizeof(*ptr) * (len1 + n));

	if (ptr == NULL)
		return (NULL);

	k = j = 0;

	for (i = 0; i <= (len1 + n); i++)
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
	if (n >= len2)
		ptr[i] = '\0';

	return (ptr);
}
