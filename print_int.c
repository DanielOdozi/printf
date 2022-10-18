#include "main.h"

/**
 * printf_int - prints an int
 * @inT: int to print
 * @flags: flags
 *
 * Return: 1
 */
int printf_int(va_list inT, char flags[])
{
	long int dig, count = 1, len = 0, temp, x, i;
	char l = '$';

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'l')
		dig = va_arg(inT, long int);
	else if (l == 'h')
		dig = (short)va_arg(inT, int);
	else
		dig = va_arg(inT, int);

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
