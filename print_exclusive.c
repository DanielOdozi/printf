#include "main.h"

/**
 * printf_exclusive_string -Non printable characters (0 < ASCII value < 32
 * or >= 127) are printed this way: \x, followed by the ASCII code value in
 * hexadecimal (upper case - always 2 characters)
 * @str: string argument
 * @flags: flags
 * Return: length printed
 */
int printf_exclusive_string(va_list str, char flags[])
{
	char *s;
	int i = 0, len = 0;

	for (; !flags[0];)
		;

	s = va_arg(str, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
			{
				++len;
				_putchar('0');
			}
			len += printf_HEX_aux(s[i]);
			len += 2;
			continue;
		}
		_putchar(s[i]);
		++len;
	}
	return (len);
}
