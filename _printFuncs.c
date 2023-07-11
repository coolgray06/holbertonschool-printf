#include <stdio.h>
#include "main.h"

/**
 * _printString - print string
 * @str: String
 *
 * Return: void
 */
void _printString(char *str)
{
	if (*str != '\0')
		puts(str);
}

/**
 * _printChar - print char
 * @c: char
 *
 * Return: void
 */
void _printChar(char c)
{
	if (c != '\0')
		putchar(c);
}

/**
 * _printInt - print int
 * @d: int
 *
 * Return: void
 */
void _printInt(int d)
{
	char str[12];
	char *ptr;

	sprintf(str, "%d", d);
	ptr = str;

	while (*ptr != '\0')
	{
		putchar(*ptr);
		ptr++;
	}
}


