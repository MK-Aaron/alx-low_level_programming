/**
 * string_toupper - convert to uppercase
 * @a: pointer
 * Return: character
 */

char *string_toupper(char *a)
{
	while (*a != '\0')
	{
		if (*a >= 97  && *a <= 122)
			*a -= 32;
		a++;
	}

	return (a);
}
