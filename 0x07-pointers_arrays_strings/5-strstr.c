/**
 * _strstr - locates a substring
 * @haystack: String to check
 * @needle: String to compare
 * Return: pointer or NULL if non matches
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (*(needle + i) != '\0')
		{
			if (*haystack == *needle)
				return (haystack);
			i++;
		}
		haystack++;
	}

	return ('\0');
}
