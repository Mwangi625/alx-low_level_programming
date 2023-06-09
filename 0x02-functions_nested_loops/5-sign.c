#include "main.h"
/**
 * print_sign - Returns 1 and prints + if n is greater than zero
*returns 0 and prints 0 if n is zero
*Returns -1 and prints - if n is less than zero
 *
 *@n: is parameter to be printed
 *
 * Return: is (1) or (0) for success, and  (-1) for failure
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
