#include "main.h"

void dummyx(void);

/**
 * checker - determine if any flag passed is valid
 * @c: the flag
 * @fl: previous flags
 * @l: length of the previous valid flags
 * Return: 1 true or otherwise
 */
int checker(char c, char fl[], int l)
{
	int i, j;
	char *valid_flags = "hl-+ #0";

	if ((c >= '0' && c <= '9') || (c == ' ' || c == '#' || c == '+'))
		return (1);
	j = 0;
	for (i = 0; i < l; i++)
	{
		if (c == fl[i])
			++j;
	}
	if (j > 1)
		return (0);

	for (i = 0; valid_flags[i]; i++)
	{
		if (c == valid_flags[i])
			return (1);
	}
	return (0);
}

/**
 * flag_checker - decide the checker
 * @f: flag
 * @dig: number
 * @func: which function call
 * Return: int length
 */
int flag_checker(char f, long int dig, char func)
{
	switch (f)
	{
	case '+':
		if (dig > 0)
		{
			if (func == '$')
				_putchar('+');
			return (1);
		}
		return (0);
	case ' ':
		if (dig > 0)
		{
			if (func == '$')

				_putchar(' ');
			return (1);
		}
		return (0);
	case '#':
		if (func == 'o' && dig > 0)
		{
			_putchar('0');
			return (1);
		}
		if (func == 'h' && dig > 0)
		{
			_putchar('0');
			_putchar('x');
			return (2);
		}
		if (func == 'H' && dig > 0)
		{
			_putchar('0');
			_putchar('X');
			return (2);
		}
		return (0);
	default:
		return (0);
	}

}

/**
 * dummyx - dummy func
 * Return: not
 */
void dummyx(void)
{
}
