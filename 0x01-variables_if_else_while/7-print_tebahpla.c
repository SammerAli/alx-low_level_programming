#include <stdio.h>

/**
 * main - display alphabet
 *
 * Return: always (0)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
