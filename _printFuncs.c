#include <stdio.h>
#include "main.h"

/**
 * _printString - print string
 * @str: String
 *
 * Return: void
 */
int _printString(char *str)
{
	int count = 0;
	
	while (str[count] != '\0')
	{
		putchar(str[count]);
		count++;
	}
	return (count);
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
 * @num: int
 *
 * Return: void
 */
int _printInt(int num)
{
	char str[12];
	char *ptr;
	int count, rcount = 0;

	sprintf(str, "%d", num);
	ptr = str;

	while (*ptr != '\0')
	{
		putchar(*ptr);
		if (*ptr == '-')
                    rcount = 1;
		ptr++;
	}
	
	for (count = 0; num != 0; count++)
	{
		num /= 10;
	}
    return (count + rcount);
}


