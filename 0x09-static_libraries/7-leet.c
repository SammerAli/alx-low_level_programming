#include "main.h"

/**
 * leet - encodes a string in 1337
 * @x: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *x)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == a[j])
			{
				x[i] = b[j];
			}
		}
	}

	return (x);
}
