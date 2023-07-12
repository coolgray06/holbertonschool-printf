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

	len = _printf("%d", 1024);
	len2 = printf("%d", 1024);

	printf("%d", len);
	printf("%d", len2);

	return (0);
}
