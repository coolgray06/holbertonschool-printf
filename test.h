#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_string - a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
int _print_string(const char * const format, ...)
{
	va_list ap;
	char *str;
	const char *ptr = format;
	int i;
	int len = 0;

	va_start(ap, format);
	while (format != NULL && *ptr != '\0')
	{
		for (i = 0; i < arg; i++)
		{		
		
 int i;
 double val;
 printf ("Printing floats:");
 va_list vl;
 va_start(vl,n);
 for (i=0;i<n;i++)
 {
   val=va_arg(vl,double);
    printf (" [%.2f]",val);
  }
  va_end(vl);
  printf ("\n");
		
		
		
		
		
		
		
			put("%c",
			:
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				num = va_arg(ap, int);
				printf("%d", num);
				break;
			case 'f':
				fnum = va_arg(ap, double);
				printf("%f", fnum);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				printed = 0;
		}
		if ((printed == 1) && *(ptr + 1))
			printf(", ");

		ptr++;
		printed = 0;
	}
	printf("\n");
	va_end(ap);
}
