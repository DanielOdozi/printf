#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _printf(const char *format, ...)
{
        va_list ap;
        int i = 0,j = 0, len, len2;

         while(format[j])
        {
            len= ++j;
        }

        //checking if it counts properly
        printf("string length = %d\n",len);
        j = 0;

        va_start (ap, format);
        while(format[j])
        {

                if(format[j] == '%' && format[j+1] == 's')
                {
                    int *str = va_arg(ap, int);
                    while(str[i])
                    {
                        _putchar(str[i]);
                        i++;
                    }
                    _putchar('\n');
                }
                else if(format[j] == '%' && format[j+1] == 'c')
                {
                    int chr = va_arg(ap, int);
                    _putchar(chr);
                    _putchar('\n');
                }
                else
                {
                    _putchar(format[j]);
                }
                j++;
        }
}

int main(void)
{
        char *s;
        s = "world";
        char a = 'p';

        _printf("%s",s);
        _printf("%c",a);
        _printf("Howdy");

}
