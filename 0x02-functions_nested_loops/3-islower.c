#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Returns 1 if c is lowercase, Returns 0 otherwise
 *
 *@c: is parameter to be printed
 *
 * Return: is (1) for success and  (0) for failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
