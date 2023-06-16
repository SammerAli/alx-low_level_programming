#include <stdio.h>

/**
 * main - display alphabet
 *
 * Return: always (0)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
