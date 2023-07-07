#include "main.h"

/**
 * rot13 - encodes a string in 1337
 * @x: string to be encoded
 *
 * Return: the resulting string;
 */
char *rot13(char *x)
{
	int i, j;

	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[i] == a[j])
			{
				x[i] = b[j];
				break;
			}
		}
	}

	return (x);
}
