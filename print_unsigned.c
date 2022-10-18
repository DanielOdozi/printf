#include "main.h"

/**
 * printf_unsigned - Returns an unisgined data type.
 * @inT: unsigned int to print
 * @flags: flags
 *
 * Return: length of printed int
 */
int printf_unsigned(va_list inT, char flags[])
{
	unsigned long int dig, count = 1, len = 0, temp, x, i;
	char l;

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'l')
		dig = va_arg(inT, unsigned long int);
	else if (l == 'h')
		dig = (unsigned short)va_arg(inT, int);
	else
		dig = va_arg(inT, unsigned int);

	temp = dig;

	while (temp > 9)
	{
		temp = temp / 10;
		count = count * 10;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 10;
		_putchar('0' + x);
		len++;
	}
	return (len);
}
