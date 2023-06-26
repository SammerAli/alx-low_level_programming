#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, x, len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s{i});
	}
	_putchar('\n')
}
