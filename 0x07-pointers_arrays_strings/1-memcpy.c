/**
 * _memcpy - copies a memory area
 * @dest: location to copy to
 * @src: location to copy from
 * @n: number of bytes to copy
 * Retun: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}

	return (dest);
}
