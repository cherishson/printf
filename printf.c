#include "main.h"
/**
 * _printf - prints to standard output
 * @format: the string to print
 * Return: the number of bytes
 */
int _printf(const char *format, ...)
{
	int count = 0, _strlen = 0;
	char c, *str;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				c = va_arg(list, int);
				write(1, &c, 1);
			}
			else if (*format == 's')
			{
				str = va_arg(list, char *);
				while (str[_strlen] != '\0')
					_strlen++;
				write(1, str, _strlen);
				count += _strlen;
			}
		} format++;
	} va_end(list);
	return (count);
}
