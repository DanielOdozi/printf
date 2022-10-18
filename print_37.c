#include "main.h"

/**
 * printf_37 - prints %
 * @percentage: ascii 37
 * @flags: flags
 *
 * Return: 1
 */
int printf_37(va_list percentage __attribute__((unused)), char flags[])
{
	for (; !flags[0];)
		;
	_putchar(37);
	return (1);
}
