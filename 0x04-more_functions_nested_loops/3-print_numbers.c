#include "main.h"
/**
*print_numbers - prints the numbers from 0-9
*
*Return: (0) for success
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
