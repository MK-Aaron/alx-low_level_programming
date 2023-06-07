int recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Interger to find square
 * Return: atural square root of a number else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursion(n, 0));
}

/**
 * recursion - recursion occurts in this function
 * @n: Value to check for squareroot number
 * @i: value used to check square root
 * Return: squareroot
 */

int recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);

	return (recursion(n, i + 1));
}
