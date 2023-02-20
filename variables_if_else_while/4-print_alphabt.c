#include <stdio.h>
#include <time.h>

/**
 *  main - Print alphabet except q and e
 *  Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	printf("\n");
	return (0);
}
