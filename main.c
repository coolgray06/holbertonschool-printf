#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf(NULL);
	_printf("Integer: [%d]\n", len);
	return (0);
}
