#include "function_pointers.h"

/**
 * int_index - Searches for an interger
 * @array: array to search for interges
 * @size: length of array
 * @cmp: function pointer
 *
 * Return: count of indexs or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag, index = 0;

	if (size <= 0)
		return (-1);
	if (!cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);

		if (flag == 0)
			index++;
		else
			break;
	}

	if (flag == 0)
		return (-1);
	else
		return (index);
}
