#include "variadic_functions.h"

/**
 * print_strings - prints strings passed to it
 * @separator: used to sub-divide strings
 * @n: Number of strings to be sub_divide
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (!str)
			str = "(nil)";

		printf("%s", str);
		if (separator && (i + 1) != n)
			printf("%s", separator);
	}

	va_end(list);

	putchar('\n');
}
