#include "main.h"

/**
 * _putchar - prints character
 * @c: the character to be printed
 *
 * Return: the number of bytes
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
