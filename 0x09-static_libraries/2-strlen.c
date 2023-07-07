#include "main.h"

/**
 * _strlen - returns the length
 * @s: string
 * Return: return the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
