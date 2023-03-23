#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
		va_list ap;
		char *str;
		int i, flag;

		va_start(ap, format);
		i = 0;

		while (format && format[i])
		{
			flag = 0;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					flag = 1;
					break;
			}
			if (format[i + 1] && !flag)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(ap);
}
