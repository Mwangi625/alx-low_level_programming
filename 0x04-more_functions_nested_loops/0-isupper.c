#include "main.h"
/**
*_isupper- a function that checks for uppercase character.
*
*@c: parameter to be checked
*
*Return: (0) for failure and (1) for success
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

