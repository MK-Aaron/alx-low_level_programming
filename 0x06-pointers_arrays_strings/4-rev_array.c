/**
 * reverse_array - print in rev
 * @a: array to reverse
 * @n: Size of array
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int i, tmp, j;

	i = 0;
	j = n;
	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[j - 1];
		a[j--] = tmp;
		i++;
	}
}
