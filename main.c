#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = ("let's try to printf a simple sentence.");
	int num = 23;
	int len, len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	_printf("String: [%s]\n", str);
	printf("String: [%s]\n", str);
	_printf("Character: [%c] is working\n", 'H');
	printf("Character: [%c] is working\n", 'H');
	_printf("Percent: [%%]\n");
	printf("Percent: [%%]\n");
	_printf("Integer: [%d]\n", num);
	printf("Integer: [%d]\n", num);
	_printf("Integer: [%i]\n", 0);
	printf("Integer: [%i]\n", 0);
	return (0);
}
