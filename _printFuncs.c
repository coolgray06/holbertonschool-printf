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
int _printInt(int num)
{
        char str[12];
        char *ptr;
        int count;

        sprintf(str, "%d", num);
        ptr = str;
        while (*ptr != '\0')
        {
                putchar(*ptr);
                ptr++;
        }
        for (count = 0; num != 0; count++)
        {
                num /= 10;
        }
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
int _printInt(int num)
{
	/*char str[12];
	char *ptr;

	sprintf(str, "%d", d);
	ptr = str;

	while (*ptr != '\0')
	{
		putchar(*ptr);
		ptr++;
	}**/
	
	int count;
	for (count = 0; num != 0; count++)
	{
		num /= 10;
		putchar(num);
	}
    return count;
}
