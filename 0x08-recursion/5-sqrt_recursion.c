#include "main.h"
int perfectSquare(int n, int c);
/**
*_sqrt_recursion - a function that returns the
*natural square root of a number.
*
*@n: parameter to test square root
*
*Return: int square root
*/

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (perfectSquare(n, 1));
}

/**
*perfectSquare - squares a number
*
*@n: parameter to be squared
*@c: counter parameter
*
*Return: int value
*/

int perfectSquare(int n, int c)
{
	if (c < n / 2)
	{
		if (c * c == n)
		{
			return (c);
		}
		return (perfectSquare(n, c + 1));
	}
	return (-1);
}
