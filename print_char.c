#include "main.h"

/**
 * printf_char - print a char
 * @ch: char to print
 * @flags: flags
 *
 * Return: no. of characters printed
 */
int printf_char(va_list ch, char flags[])
{
	for (; !flags[0];)
		;


	_putchar(va_arg(ch, int));
	return (1);
}
