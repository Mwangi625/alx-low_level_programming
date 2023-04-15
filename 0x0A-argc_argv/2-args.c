#include <stdio.h>

/**
 * main - entry point
 * @argc: no. of arguments
 * @argv: array of the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
