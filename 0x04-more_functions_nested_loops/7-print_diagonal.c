#include "main.h"

/**
 * print_line - draws a straighline in terminal
 * @n: no. of times /  should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('/');
			_putchar('\n');
		}
	}
}
