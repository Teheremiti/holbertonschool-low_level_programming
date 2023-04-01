#include <stdio.h>

/**
 * main - Print all possible combinaision of 3 digits
 * Return: void
 */

int main(void)
{
	int centaine = 0;

	for (; centaine <= 7; centaine++)
	{
		int dizaine = centaine + 1;

		for (; dizaine <= 8; dizaine++)
		{
			int unite = dizaine + 1;

			for (; unite <= 9; unite++)
			{
				putchar('0' + centaine);
				putchar('0' + dizaine);
				putchar('0' + unite);

				if (centaine != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
