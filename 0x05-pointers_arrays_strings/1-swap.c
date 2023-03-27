#include "main.h"
/**
*swap_int - a function that swaps the values of two integers.
*
*@a: parameter to swap with b.
*@b: parameter to swap with a.
*
*Return: (0)
*/

void swap_int(int *a, int *b)
{
	int t;

	t  = *a;
	*a = *b;
	*b = t;

}

