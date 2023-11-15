#include "main.h"

/**
 * _printf - prints to output
 * @format: the format to be printed
 *
 * Return: the number of bytes
 */

int _printf(const char *format, ...)
{
	int i, str_count, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = put_string(va_arg(args, char *));
			i++;
			count += (str_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
