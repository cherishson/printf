#include "main.h"

/**
 * print_format - prints format
 * @specifier: the various formats
 * @args: the pointer to format types
 * Return: the bytes of printed format
 */

int print_format(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
	{
		count += _putchar(va_arg(args, int));
	}
	if (specifier == 's')
	{
		count += put_string(va_arg(args, char *));
	}
	if (specifier == '%')
	{
		count += _putchar('%');
	}
	return (count);
}

