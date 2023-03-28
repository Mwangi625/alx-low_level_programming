#include "main.h"
/**
*_strlen - a function that returns the length of a string.
*
*@s: parameter to be measured
*
*Return: len
*/

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
