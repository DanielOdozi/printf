#include "main.h"

/**
 * printf_bin - prints an int in octal form
 * @b: int to print
 * @flags: flags
 *
 * Return: length of the number printed
 */
int printf_bin(va_list b, char flags[])
{
	unsigned int dig, count = 1, len = 0, temp, x;

	for (; !flags[0];)
		;

	dig = va_arg(b, unsigned int);
	temp = dig;

	while (temp > 1)
	{
		temp = temp / 2;
		count = count * 2;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 2;
		_putchar('0' + x);
		len++;
	}
	return (len);
}
