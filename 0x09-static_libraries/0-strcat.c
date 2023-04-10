#include "main.h"
/**
*_strcat - a function that concatenates two strings
*
*@dest: concatenated string
*@src: string to be appended
*
*Return: dest pointer
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);

}
