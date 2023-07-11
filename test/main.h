#ifndef MAIN_H
#define MAIN_H

int printString(char *str);
char printChar(char c);
char printPercent(char perc);
int _printf(const char *format, ...);

typedef void (*printFunc)(va_list args)

typedef struct
{
	char *specifier;
	printFunc func;
} option;
#endif
