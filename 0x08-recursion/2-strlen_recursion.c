#include "main.h"
/**
*_strlen_recursion - a function that returns the length of a string
*
*@s: parameter to calculate length
*
*Return 0
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return(n);


}
