#include "main.h"
/**
*puts2 - a function that prints a string, followed by a new line, to stdout
*
*@str: string to be printed
*
*Return: nothing
*/

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len -= 1;

	for (; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
