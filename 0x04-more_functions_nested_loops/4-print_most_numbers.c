#include "main.h"
/**
*print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
*doesn't print 2 and 4
*
*Return: void
**/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		if (i == '1' || i == '3')
		{
			i += 2;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}

