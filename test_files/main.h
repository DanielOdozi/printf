#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int _putchar(char c);
int myprintf(const char *format, ...);
int flag_checker(char f, long int dig, char func);
int checker(char c, char flags[], int l);
int printf_char(va_list ch, char flags[]);
typedef struct f_form
{
	char *ad;
	int (*w)(va_list);
} type;
#endif /* MAIN_H */
