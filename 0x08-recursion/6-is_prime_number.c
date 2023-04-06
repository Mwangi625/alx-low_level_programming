#include "main.h"
/**
*is_prime_number - a function that returns 1
* if the input integer is a prime number, otherwise return 0
*
*@n: parameter to be checked
*
*Return: int value
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - checks whether number is a prime number
 * @n: parameter being checked
 * @c: counter
 *
 * Return: 1 if prime 0 otherwise
 */

int prime(int n, int c)
{
	if (n % c == 0)
	{
		return (0);
	}
	else if (c > n / 2)
	{
		return (1);
	}
	return (prime(n, c + 1));
}

