#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: strings to concatenate
 * @s2: strings to be concatenated
 * Return:return pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, totallen, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1  = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	totallen = len1 + len2;

	ptr = malloc(sizeof(char) * (totallen + 1));

	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < totallen; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
