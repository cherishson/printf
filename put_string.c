#include "main.h"

/**
 * put_string - prints a string
 * @str: the string to print
 *
 * Return: the number of bytes
 */

int put_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar((int)*str);
		count++;
		str++;
	}
	return (count);
}
