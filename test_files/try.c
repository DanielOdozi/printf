#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
        va_list ap;
        int i;
        int len, k = 0, counter;

        va_start (ap, format);
        //i = vfprintf(stdout, format, ap);
        len = strlen(format);
        //Above gets the length as you know
        
        //While parses the format and prints the characters till conditions are met
        while(format[k] != '%' || format[k + 1] != 's')
        {
            putchar(format[k]);
            k++;
            if (format[k] == '%' && format[k + 1] == 's')
                {

                    int result = va_arg(ap, int);
                    puts(result);
                }
//NOTE. it works only if %s is at the end and i cant get it to work with %c
//so i commented it out below. the rest of the code is yours
                /**else if (format[k] == '%' && format[k + 1] == 'c')
                {
                        int result = va_arg(ap, int);
                        putchar(result);
                }*/
        }
        va_end(ap);
        return i;
}

int main(void)
{
        /*char a;
        a = 'D';
        char *s;
        s = "My name is john wayne";
        int i = 4;

        _printf("My name is\n");
        _printf("%c\n", a);
        _printf("What is your name good sir?\n %s\n", s);
        _printf("%d\n", i);
        _printf("%b\n", 98);
        */
        char *name;
        name = "abdull";
        char charr = 'D';
        _printf("my name is %s" ,name);
}
