#include "main.h"

/**
 * printf_oct - prints an int in octal form
 * @ocT: int to print
 * @flags: flags
 *
 * Return: length of the number printed
 */
int printf_oct(va_list ocT, char flags[])
{
	unsigned long int dig, count = 1, len = 0, temp, x, i;
	char l = '$';

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'l')
		dig = va_arg(ocT, unsigned long int);
	else
		dig = va_arg(ocT, unsigned int);

	for (i = 0; flags[i] != '$'; i++)
		len += flag_checker(flags[i], dig, 'o');

	temp = dig;

	while (temp > 7)
	{
		temp = temp / 8;
		count = count * 8;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 8;
		_putchar('0' + x);
		len++;
	}
	return (len);
}
