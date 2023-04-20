#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: list of all
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *separator = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					str = va_arg(all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all);
}
