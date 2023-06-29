#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;
	c = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';

	return(dest);
}
