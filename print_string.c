#include "main.h"

/**
 * printf_string - prints a string
 * @s: string to print
 * @flags: flags
 *
 * Return: len of string
 */
int printf_string(va_list s, char flags[])
{
	char *str;
	int i = 0;

	for (; !flags[0];)
		;

	str = va_arg(s, char *);
	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
