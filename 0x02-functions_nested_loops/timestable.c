#include <stdio.h>

int main()
{
        int i, j, k;

        for ( i = 0; i < 10; i++)
        {
                for( j = 0; j < 10; j++)
                {
                        k = i * j;
                       putchar(k);
                       putchar(',');
                       putchar(' ');
                }
                putchar('\n');
                putchar('$');
	}
}
