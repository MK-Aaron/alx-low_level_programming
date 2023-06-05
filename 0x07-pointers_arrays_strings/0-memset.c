/**
 * _memset - Fills memory with a constant byte
 * @s: Ponter to memory to be filled
 * @b: characters to be filled in the memory
 * @n: number of bytes to be filled
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
