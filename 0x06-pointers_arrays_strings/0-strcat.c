#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to be added
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
