#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: The string which will be printed between strings.
 * @n: number of args.
 * @...: args.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringList;
	unsigned int i;
	char *str;

	va_start(stringList, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(stringList, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringList);
}
