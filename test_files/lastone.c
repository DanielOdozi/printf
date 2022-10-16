#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
char* convert(unsigned int, int); //convert integer in octal and hex etc.


char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num % base];
		num /= base;
	}
	while (num != 0);

	return(ptr);
}
int _printf(const char *format, ...)
{
	const char *t;
	unsigned int i;
	char *s;

	va_list ap;
	va_start(ap, format);

	for (t = format; *t != '\0'; t++)
	{
		while (*t != '%')
		{
			putchar(*t);
			t++;
		}
		
		t++;

		switch (*t)
		{
			case 'c':
				i = va_arg(ap, int);
				putchar(i);
				break;
			case 's':
				s = va_arg(ap, char *);
				puts(s);
				break;
		}
	}
	va_end(ap);
}

int main(void)
{
	char *s = "Donny";

	_printf("%s and %s", s, s);
}
