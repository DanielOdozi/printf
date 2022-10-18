#include "main.h"

/**
 * printf_dec - prints an int
 * @d: int to print
 * @flags: flags
 *
 * Return: 1
 */
int printf_dec(va_list d, char flags[])
{
	long int dig, count = 1, len = 0, temp, x, i;

	char l = '$';

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'l')
		dig = va_arg(d, long int);
	else if (l == 'h')
		dig = (short)va_arg(d, int);
	else
		dig = va_arg(d, int);

	for (i = 0; flags[i] != '$'; i++)
		len += flag_checker(flags[i], dig, '$');

	temp = dig;
	if (dig < 0)
	{
		_putchar('-');
		dig = dig * -1;
		temp = dig;
		++len;
	}
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
