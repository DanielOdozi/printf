#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char *rot = "Hello";
	long int r, a = LONG_MIN, aa, bb;

	bb = printf("%ld\n", a);
	aa = _printf("%ld\n", a);
	printf("%d\n", bb);
	_printf("%d\n", aa);
	r = _printf("%R\n", rot);
	_printf("%d\n", r);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %+i]\n", len, len);
	printf("Length:[%d, %+i]\n", len2, len2);
	_printf("Length:[%++++d, %   i]\n", len, len);
	printf("Length:[%++++d, %   i]\n", len2, len2);
	len = _printf("Negative:[%d]\n", 4858585585599559);
	len2 = printf("Negative:[%i]\n", 4858585585599559);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Unsigned:[%+u]\n", 55);
	printf("Unsigned:[%+u]\n", 55);

	_printf("Unsigned:[%+u]\n", UINT_MAX);
	printf("Unsigned:[%+u]\n", UINT_MAX);
	_printf("Unsigned:[%hhhhu]\n", UINT_MAX);
	printf("Unsigned:[%hhhhu]\n", UINT_MAX);
	_printf("Unsigned octal:[% o]\n", ui);
	printf("Unsigned octal:[% o]\n", ui);
	_printf("Unsigned hexadecimal:[%+x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%+x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%q]\n");
	printf("Unknown:[%q]\n");
	len = _printf("%i\n", INT_MIN);
	len2 = printf("%i\n", INT_MIN);
	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
