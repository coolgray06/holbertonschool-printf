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
	int num, len = 0, lenStr = 0, lenInt = 0;
	char ch, *str;

	va_start(args, format);
	while (*format != '\0')
	{
		len++;
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				str = va_arg(args, char*);
				lenStr = _printString(str);
			}
			else if (*format == 'i' || *format == 'd')
			{
				num = va_arg(args, int);
				lenInt = _printInt(num);
			}
			else if (*format == 'c')
			{
				ch = va_arg(args, int);
				_printChar(ch);
			}
			else if (*format == '%')
				putchar(37);
		}
		else
			putchar(*format);
		format++;
		len++;
	}
	va_end(args);
	return (len + lenStr + lenInt);
}
