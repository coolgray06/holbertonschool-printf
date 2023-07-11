#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - our own print f
 * @format:  format specifier
 *
 * Return: int
 **/
int _printf(const char *format, ...)
{
	va_list args;
	int num, len = 0, lenStr = 0, lenInt = 0, lenStrReturn = 0, lenIntReturn = 0;
	char ch, *str;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				str = va_arg(args, char*);
				if (str == NULL)
				{
					putchar ('(');
					putchar ('n');
					putchar ('u');
					putchar ('l');
					putchar ('l');
					putchar (')');
					lenStr = 6;
				}
				else
				{
					lenStrReturn = _printString(str);
					lenStr += lenStrReturn;
				}
			}
			else if (*format == 'i' || *format == 'd')
			{
				num = va_arg(args, int);
				lenIntReturn = _printInt(num);
				lenInt += lenIntReturn;
			}
			else if (*format == 'c')
			{
	
				if (va_arg(args, int) != '\0')
				{
					ch = va_arg(args, int);
					_printChar(ch);
					len++;
				}
			}
			else if (*format == '%')
			{
				putchar(37);
				len++;
			}
			else
			{
				len--;
				format--;
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len + lenStr + lenInt);
}
