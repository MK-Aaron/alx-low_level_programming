/**
 * _strspn - gets length of a sustring
 * @s: String to check
 * @accept: characters to compare
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int same = 1;

	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[i] == accept[j])
				same++;
			j++;
		}
		i++;
	}
	return (same);
}
