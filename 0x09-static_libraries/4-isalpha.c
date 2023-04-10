#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * Returns 1 if c is alphabetic Returns 0 otherwise
 *
 *@c: is parameter to be printed
 *
 * Return: is (1) for success and  (0) for failure
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
