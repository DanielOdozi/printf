#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i;

	va_start (ap, format);
	i = vfprintf(stdout, format, ap);
	va_end(ap);
	return i;
}

int main(void)
{
	char a;
	a = 'D';
	char *s;
	s = "My name is john wayne";
	int i = 4;

	_printf("My name is\n");
	_printf("%c\n", a);
	_printf("What is your name good sir?\n %s\n", s);
	_printf("%d\n", i);
	_printf("%b\n", 98);
}
