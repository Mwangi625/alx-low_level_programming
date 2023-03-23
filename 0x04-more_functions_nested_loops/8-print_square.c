#include "main.h"
/**
*print_square -  a function that prints a square, followed by a new line
*
*@size: parameter to determine square size
*
*Return: 0
*/

void print_square(int size)
{
	int i, j;
	
	if (size == 0)
	{
		 _putchar('\n');
	}

	else{

		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{		
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
return (0);
}
