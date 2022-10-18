#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct specifiers - handles print formats
 * @sp: hold the specifier
 * @f: function to call for the specifier
 */
typedef struct specifiers
{
	char sp;
	int (*f)(va_list args, char flags[]);
} sp_t;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list ch, char flags[]);
int printf_string(va_list s, char flags[]);
int printf_int(va_list inT, char flags[]);
int printf_dec(va_list d, char flags[]);
int printf_37(va_list percentage, char flags[]);
int printf_bin(va_list b, char flags[]);
int printf_unsigned(va_list inT, char flags[]);
int printf_oct(va_list ocT, char flags[]);
int printf_hex(va_list heX, char flags[]);
int printf_HEX(va_list heX, char flags[]);
int printf_exclusive_string(va_list str, char flags[]);
int printf_pointer(va_list p, char flags[]);
int printf_rot13(va_list R, char flags[]);
int printf_srev(va_list r, char flags[]);

/* customary functions */
int short_i(va_list);
int long_i(va_list);
int case_l(unsigned long int val);
int case_u(unsigned long int val);
int checker(char c, char flags[], int l);
int printf_HEX_aux(unsigned long int n);
int printf_hex_aux(unsigned long int n);
int flag_checker(char f, long int dig, char func);

#endif
