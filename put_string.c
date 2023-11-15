#include "main.h"

/**
 * put_string - prints a string
 * @str: the string to print
 *
 * Return: the number of bytes
 */

int put_string(char *str)
{
	int index = 0;

	if (str)
	{
		for (; str[index] != '\0'; index++)
		{
			_putchar(str[index]);
		}
	}
	return (index);
}
