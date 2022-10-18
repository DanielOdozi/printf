#include "main.h"

/**
 * printf_hex_aux - prints an int in octal form
 * @n: int to print
 *
 * Return: length of the number printed
 */
int printf_hex_aux(unsigned long int n)
{
	unsigned long int dig, count = 1, len = 0, temp, x;

	dig = n;
	temp = dig;

	while (temp > 15)
	{
		temp = temp / 16;
		count = count * 16;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 16;
		_putchar(case_l(x));
		len++;
	}
	return (len);
}
