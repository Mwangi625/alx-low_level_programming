#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
char upper;
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');
return (0);
}
