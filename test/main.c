#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = ("let's try to printf a simple sentence.\n");

	printf("String:[%s]\n", str);
	printf("String:[%s]\n", str);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
    	printf("Percent:[%%]\n");
	return (0);
}
