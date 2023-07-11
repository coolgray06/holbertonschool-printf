#include <stdio.h>
#include "main.h" 

/**
 * countString - Get the length of string
 * @str: String
 *
 * Return: Length
 */

int countString(char *str) 
{
	int i, len;
	
	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}

	return (len);
}   
