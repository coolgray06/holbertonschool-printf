#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const *char const format, ...)
{
	va_list ap;
	int num, i = 0;
	const char *ptr = format;

	va_start(ap, format);

	op_t ops[] = {
        {"d", op_countString},
        {"i", op_countString},
        {"u", op_calcConst},
        {"o", op_calcConst},
        {"x", op_calcConst},
        {"X", op_calcConst},
        {"c", op_myPutchar},
        {"s", op_myPuts},
        {"p", op_processAddress},
        {"%", op_myPuts},
        {"r", op_myPuts},
        {NULL, NULL}
        };
	
	while (format != NULL && *ptr != '\0')
	{
		if (va_arg(ap, int) == "%"
		{
			ptr++;
			num = *ptr;
			break;
		}
		else
			ptr++;
	}

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
}
