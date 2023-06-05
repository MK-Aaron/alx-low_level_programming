/**
 * _memcpy - copies a memory area
 * @dest: location to copy to
 * @src: location to copy from
 * @n: number of bytes to copy
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
