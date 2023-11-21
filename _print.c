#include "main.h"

/**
 * _printf - prints to output
 * @format: the format to be printed
 *
 * Return: the number of bytes
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += print_format(*(++format), args);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (count);
}
