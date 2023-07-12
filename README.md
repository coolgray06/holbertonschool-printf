# _PRINTF FUNCTION
	The custom **_printf** function is an implementation of a simplified version of the standard C library function **printf**. It provides basic formatting and printing capabilities to the console.

# USAGE
1. Include the **main.h** header file from the C source file:
```
#include "main.h"
```
2. Call the **_printf** function with the desired format string and argument:
```
int _printf(const char *format, ...)
```
3. Compile your source file, linking with the appropriate files:
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
4. Run the compiled program:
```
./_printf.c
```
5. The formatted output will be displayed on the console.

# FORMAT SPECIFIERS

The **_printf** function supports the following format specifiers:

* ** %s** - prints a string.
* **%i** and  **%d** - decimal integer
* **%c** - prints a character
* **%%** - prints a percent sign

# LIMITATIONS

+ This **_printf** function only supports a subset of the format specifiers and formatting options compared to the standard **printf** function.
+ Error handling and edge cases may not be fully implemented.
+ This function may not support all possible input scenarios.


