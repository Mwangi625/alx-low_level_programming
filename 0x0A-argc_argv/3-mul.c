#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x, y, product;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;

		printf("%d\n", product);

	}
	return (0);
}
