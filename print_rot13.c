#include "main.h"

/**
 * printf_rot13 - prints the rot13'ed string
 * @R: the string to be rot13'ed
 * @flags: flags
 *
 * Return: the number of characters printed
 */
int printf_rot13(va_list R, char flags[])
{
	unsigned int i, j, count = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str;

	for (; !flags[0];)
		;

	str = va_arg(R, char *);
	if (!str)
		str = "(ahyy)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == str[i])
			{
				_putchar(b[j]);
				count++;
				break;
			}
		}
		if (!b[j])
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
