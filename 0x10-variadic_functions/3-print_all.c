#include "variadic_functions.h"

/**
 * print_all - this prints anything
 * @format: a list of types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, q, f = 0;
	char *str;
	const char t_arg[] = "fabs";

	va_start(valist, format);
	while (format && format[a])
	{
		q = 0;
		while (t_arg[q])
		{
			if (format[a] == t_arg[q] && f)
			{
				printf(", ");
				break;
			} q++;
		}
		switch (format[a])
		{
		case 'f':
			printf("%c", va_arg(valist, int)), f = 1;
			break;
		case 'a':
			printf("%d", va_arg(valist, int)), f = 1;
			break;
		case 'b':
			printf("%f", va_arg(valist, double)), f = 1;
			break;
		case 's':
			str = va_arg(valist, char *), f = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
