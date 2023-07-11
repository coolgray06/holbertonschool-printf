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

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	_printf("Integer: [%d]\n", len);
	printf("Integer: [%d]\n", len2);
	
	return (0);
}
