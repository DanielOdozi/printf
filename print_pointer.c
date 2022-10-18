#include "main.h"

/**
 * printf_pointer - prints an int in octal form
 * @p: int to print
 * @flags: flags
 *
 * Return: length of the number printed
 */
int printf_pointer(va_list p, char flags[])
{
	unsigned long int dig;
	int len = 0, i;
	char str[6] = "(nil)";

	dig = va_arg(p, unsigned long int);
	for (; !flags[0];)
		;

	if (!dig)
	{
		for (i = 0; i < 5; i++)
			_putchar(str[i]);
		return (5);
	}
	_putchar('0');
	_putchar('x');

	len = printf_hex_aux(dig);
	return (len + 2);
}
