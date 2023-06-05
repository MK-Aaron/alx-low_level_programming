/**
 * _strpbrk - Searches for a set of bytes
 * @s: string to check
 * @accept: characters to check
 * Return: Pointer to a string or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
