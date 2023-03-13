#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenate all the arguments of the program
 *
 * @ac: Input int, argument count
 * @av: Input array of strings, argument vector
 *
 * Return: NULL if fail or ac == 0 or av == NULL,
 * otherwise pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	args = malloc(sizeof(char) * len);

	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k] = '\n';
		k++;
	}
	return (args);
}
