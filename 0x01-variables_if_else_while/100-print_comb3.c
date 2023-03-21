#include <stdio.h>
/**
*main - prog entry point
*
* program that prints all possible different
* combinations of two digits
*
* Return: 0 for success
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((i) + '0');
			putchar((j) + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
