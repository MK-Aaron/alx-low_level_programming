/**
 * _strspn - gets length of a sustring
 * @s: String to check
 * @accept: characters to compare
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int same = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				same++;
				flag = 1;
			}
			j++;
		}

		if (flag == 0)
			return (same);
		i++;
	}

	return (0);
}
